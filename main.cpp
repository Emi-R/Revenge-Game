#include <iostream>
#include <istream>
#include <string>
#include <ctime>
#include <conio.h>
#include "rlutil.h"
#include <windows.h>
#include<string.h>
HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	//SetConsoleTextAttribute(h,7);

using namespace std;

void mostrarMenu(void);

void mostrarCreditos(void);

bool confirmacion(void);

void mostrarReglas(void);


int main() {

    setlocale(LC_ALL, "Spanish");

    srand(time(NULL));



    int opcion;
    int dadocomienzo1 = 0;
    int dadocomienzo2 = 0;
    bool salir = false;
    bool reroll = false;
    string jugador1;
    string jugador2;

    do {

        // Mostrar menú
        mostrarMenu();

        cout << "Bienvenido! Seleccioná la opcion deseada: ";
        cin >> opcion;

        switch (opcion) {
        //Opcion Jugar
        case 1:

            system("cls");
            //Pedir Nombres
            cout << "Jugador uno, ingresá tu nombre: ";
            cin >> jugador1;

            cout << "Jugador dos, ingresá tu nombre: ";
            cin >> jugador2;

            //Establecer primer jugador
            system("cls");

            cout << "Comienza el juego! Se determinará que jugador tira primero. El jugador que tire el dado mas alto empieza tirando." << endl << endl;

            do {

                cout << jugador1 << " presioná Enter para tirar tu dado." << endl << endl;
                system("Pause>nul");

                dadocomienzo1 = 1 + rand() % 6;

                cout << "Salio el: " << dadocomienzo1 << endl;

                cout << jugador2 << " presioná Enter para tirar tu dado." << endl << endl;
                system("Pause>nul");

                dadocomienzo2 = 1 + rand() % 6;

                cout << "Salio el: " << dadocomienzo2 << endl;
                system("Pause>nul");

                if (dadocomienzo1 == dadocomienzo2) {
                    cout << "Empate. Tiremos de nuevo." << endl;
                    reroll = true;
                } else {
                    reroll = false;
                }

            } while (reroll == true);

            /*if (dadocomienzo1 > dadocomienzo2)
            {
                cout << jugador1
            }
                */


            break;
        case 2:
            break;
        case 3:
            mostrarCreditos();
            break;
        case 4:
            mostrarReglas();
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
        //  Opcion Estadistícas
        //  Opcion Salir
        //marie


    } while (salir == false);

    return 0;
}

void mostrarMenu(void) {
    system("cls");

    cout << "\t- Revenge -" << endl;
    cout << "---------------------------" << endl;
    cout << "1 - Jugar" << endl;
    cout << "2 - Estadísticas" << endl;
    cout << "3 - Créditos" << endl;
    cout << "4 - Reglas del Juego" << endl;
    cout << "---------------------------" << endl;
    cout << "0 - Salir" << endl << endl;
}

void mostrarCreditos(void) {
    system("cls");

    cout << "\t\t-- Créditos --" << endl << endl;
    cout << "                 Desarrollado por " << endl;
    cout << endl;
   SetConsoleTextAttribute(h,9);
cout << ".|'''.|  '||'  |'  '||' '|' '|.   '|' '||''''|  |''||''| "<< endl;
cout << "||..  '   || .'      || |    |'|   |   ||  .       ||   "<< endl;
cout << " ''|||.   ||'|.       ||     | '|. |   ||''|       ||  "<< endl;
cout <<".    '||  ||  ||      ||     |   |||   ||          ||  "<< endl;
cout <<"|'....|' .||.  ||.   .||.   .|.   '|  .||.....|   .||. "<< endl;
SetConsoleTextAttribute(h,7);
cout << endl;
    cout << "    para la Universidad Tecnológica Nacional (FRGP)" << endl << endl;
    cout << "Marianella Gottig - Legajo: 25508" <<endl;
    cout << "Maria Jose Illanes Saldivia - Legajo: 24512" << endl;
    cout << "Emiliano Ramírez - Legajo: 25583" << endl << endl;

    cout << "Presioná cualquier tecla para volver al menú principal." << endl;
    system("Pause>nul");


}

void mostrarReglas(void){
    system("cls");
system("start https://docs.google.com/document/d/1t0_3MMSeo4Gxg8dZQyGgcc5cwDqj9uAHlAFINEYmoFk/edit");

}

bool confirmacion(void) {
    char conf;

    cout << endl << "\t¿Desea salir del juego?" << endl;
    cout << "\t   S -- Si | N -- No" << endl;
    cin >> conf;

    conf = toupper(conf);

    if (conf == 'S') {
        return true;
    } else if(conf == 'N')

    {
        return false;
    }
}
