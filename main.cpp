#include <iostream>
#include <ctime>

using namespace std;

void mostrarMenu(void);

void mostrarCreditos(void);

int main()
{
    

    setlocale(LC_ALL, "Spanish");
    srand(time(NULL));

    int opcion;
    string jugador;
    string jugadoruno;
    string jugadordos;

    do
    {
    // Mostrar menú
    mostrarMenu();

    cout << "Bienvenido! Selecciona la opcion deseada:";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        mostrarCreditos();
        break;
    default:
        break;
    }
    
    //  Opcion Jugar
    //      Pedir Nombres
    //      Establecer primer jugador
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
    //  Opcion Estadistícas
    //  Opcion Salir
    //marie
     
   
    } while (opcion != 0);

    return 0;
}

void mostrarMenu(void)
{
    system("cls");

    cout << "\t- Revenge -" << endl;
    cout << "---------------------------" << endl;
    cout << "1 - Jugar" << endl;
    cout << "2 - Estadísticas" << endl;
    cout << "3 - Créditos" << endl;
    cout << "---------------------------" << endl;
    cout << "0 - Salir" << endl << endl;
}

void mostrarCreditos(void)
{
    system("cls");

    cout << "\t-- Créditos --" << endl << endl;
    cout << "\tDesarollado por SkyNet" << endl << endl;
    cout << "Marianella Gottig - Legajo: 25508" <<endl;
    cout << "Maria Jose Illanes Saldivia - Legajo: 24512" << endl;
    cout << "Emiliano Ramírez - Legajo: 25583" << endl << endl;

    system("pause");
}