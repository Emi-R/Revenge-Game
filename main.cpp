#include <iostream>
#include <istream>
#include <string>
#include <ctime>
#include <conio.h>

using namespace std;

void mostrarMenu(void);

void mostrarCreditos(void);

bool confirmacion(void);

int main()
{

    setlocale(LC_ALL, "Spanish");

    srand(time(NULL));

    int opcion;
    int dadocomienzo1 = 0;
    int dadocomienzo2 = 0;
    bool salir = false;
    string jugador1;
    string jugador2;

    do
    {

    // Mostrar men�
    mostrarMenu();

    cout << "Bienvenido! Seleccion� la opcion deseada: ";
    cin >> opcion;

    switch (opcion)
    {
    //Opcion Jugar
    case 1:

        system("cls");
        //Pedir Nombres
        cout << "Jugador uno, ingres� tu nombre: ";
        cin >> jugador1;

        cout << "Jugador dos, ingres� tu nombre: ";
        cin >> jugador2;

        //Establecer primer jugador
        system("pause<nul");
        system("cls");

        cout << "Comienza el juego! Se determinar� que jugador tira primero. El jugador que tire el dado mas alto empieza tirando." << endl << endl;
        cout << jugador1 << " presion� Enter para tirar tu dado." << endl << endl;
        system("Pause>nul");

        dadocomienzo1 = 1 + rand() % 6;

        cout << "Salio el: " << dadocomienzo1 << endl;

        cout << jugador2 << " presion� Enter para tirar tu dado." << endl << endl;
        system("Pause>nul");

        dadocomienzo2 = 1 + rand() % 6;

        cout << "Salio el: " << dadocomienzo2 << endl;
        system("Pause>nul");


        
        


        break;
    case 2:
        break;
    case 3:
        mostrarCreditos();
        break;
    case 0:
        salir = confirmacion();
    default:
        break;
    }
    
    //      Tirada Jugador 1
    //          Lanzar 2 dados 12 caras
    //          Calcular numero objetivo
    //          Lanzar dados stock (6 caras)
    //          Elegir suma seleccionada
    //          Tirada Exitosa
    //      Tirada Jugador 2
    //          Lanzar dados stock (6 caras)
    //      
    //      
    //      
    //  Opcion Estadist�cas
    //  Opcion Salir
    //marie
     
    
    } while (salir == false);

    return 0;
}

void mostrarMenu(void)
{
    system("cls");

    cout << "\t- Revenge -" << endl;
    cout << "---------------------------" << endl;
    cout << "1 - Jugar" << endl;
    cout << "2 - Estad�sticas" << endl;
    cout << "3 - Cr�ditos" << endl;
    cout << "---------------------------" << endl;
    cout << "0 - Salir" << endl << endl;
}

void mostrarCreditos(void)
{
    system("cls");

    cout << "\t-- Cr�ditos --" << endl << endl;
    cout << "\tDesarollado por SkyNet" << endl << endl;
    cout << "Marianella Gottig - Legajo: 25508" <<endl;
    cout << "Maria Jose Illanes Saldivia - Legajo: 24512" << endl;
    cout << "Emiliano Ram�rez - Legajo: 25583" << endl << endl;

    cout << "Presion� cualquier tecla para volver al men� principal." << endl;
    system("Pause>nul");

}

bool confirmacion(void)
{
    char conf;
    
    cout << endl << "\t�Desea salir del juego?" << endl;
    cout << "\t   S -- Si | N -- No" << endl;
    cin >> conf;

    conf = toupper(conf);

    if (conf == 'S')
    {
        return true;
    }
    else
        if(conf == 'N')
    
        {
            return false;
        }
}