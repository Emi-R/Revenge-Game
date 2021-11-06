#include <iostream>
#include <istream>
#include <string>
#include <ctime>
#include <conio.h>
#include <Windows.h>

#include "rlutil.h"

using namespace std;
using namespace rlutil;

void mostrarMenu(void);

void mostrarCreditos(void);

bool confirmacion(void);

bool establecerPrimerJugador(char j1[], char j2[]);

int tiradaNumeroObjetivo(void);

void rollDados(void);

int main()
{

    setlocale(LC_ALL, "Spanish");

    srand(time(NULL));

    int opcion;
    int numObj;
    bool salir = false;   
    char jugador1[50] = {};
    char jugador2[50] = {};

    do
    {

    // Se ejecuta funcion de mostrar menú
    mostrarMenu();

    cout << "Bienvenido! Seleccioná la opcion deseada: ";
    cin >> opcion;

    switch (opcion)
    {
    //Opcion Jugar
    case 1:

        system("cls");

        //Pedir Nombres
        cout << "Jugador uno, ingresá tu nombre: ";
        cin >> jugador1;

        cout << "Jugador dos, ingresá tu nombre: ";
        cin >> jugador2;

        system("cls");

        cout << "Comienza el juego! Se determinará que jugador tira primero. El jugador que tire el dado mas alto empieza tirando." << endl << endl;

        // Se ejecuta funcion de establecer primer jugador

        if (establecerPrimerJugador(jugador1, jugador2) == true)
        {
            cout << jugador1 << " sacó el número mas alto! Comienza tirando." << endl;

            anykey();
            cls;

            cout << "\t-- Ronda número objetivo --" << endl;

            numObj = tiradaNumeroObjetivo();

        }
        else
        {
            cout << jugador2 << " sacó el número mas alto! Comienza tirando." << endl;

            anykey();
            cls;

            cout << "\t-- Ronda número objetivo --" << endl;
        }

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
    
    //      Tirada primer jugador
    //          Lanzar 2 dados 12 caras
    //          Calcular numero objetivo
    //          Lanzar dados stock (6 caras)
    //          Elegir suma seleccionada
    //          Tirada Exitosa
    //      Tirada segundo jugador
    //          Lanzar dados stock (6 caras)
    //      
    //      
    //      
    //  Opcion Estadistícas
    //  Opcion Salir

    } while (salir == false);

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

    cout << "\t\t-- Créditos --" << endl << endl;
    cout << "            Desarollado por SkyNet" << endl;
    cout << "    para la Universidad Tecnológica Nacional (FRGP)" << endl << endl;
    cout << "Marianella Gottig - Legajo: 25508" <<endl;
    cout << "Maria Jose Illanes Saldivia - Legajo: 24512" << endl;
    cout << "Emiliano Ramírez - Legajo: 25583" << endl << endl;

    cout << "Presioná cualquier tecla para volver al menú principal." << endl;
    system("Pause>nul");

}

bool confirmacion(void)
{
    char conf;
    
    cout << endl << "\t¿Querés salir del juego?" << endl;
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

bool establecerPrimerJugador(char j1[], char j2[])
{
    int dadocomienzo1;
    int dadocomienzo2;
    bool reroll = false;

    do
    {

        cout << j1 << " presioná Enter para tirar tu dado." << endl;
        system("Pause>nul");

        cout << "Tirando dado..." << endl;
        rollDados();
        dadocomienzo1 = 1 + rand() % 6;

        cout << "Salio el: " << dadocomienzo1 << endl << endl;

        cout << j2 << " presioná Enter para tirar tu dado." << endl;
        system("Pause>nul");

        cout << "Tirando dado..." << endl;
        rollDados();
        dadocomienzo2 = 1 + rand() % 6;

        cout << "Salio el: " << dadocomienzo2 << endl << endl;

        if (dadocomienzo1 == dadocomienzo2)
        {
            cout << "Empate. Tiremos de nuevo." << endl;
            reroll = true;
        }
        else
        {
            reroll = false;
        }

    } while (reroll == true);

    if (dadocomienzo1 > dadocomienzo2)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int tiradaNumeroObjetivo(void)
{
    int dado1, dado2, suma;

    dado1 = 1 + rand() % 12;
    dado2 = 1 + rand() % 12;

    suma = dado1 + dado2;

    return suma;

}

void rollDados(void)
{
    int segs = 2;

    while (segs >= 1)
    {
        Sleep(500);
        segs--;
    }
}