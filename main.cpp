#include <iostream>

using namespace std;

int main()
{
    void mostrarMenu(void);

    setlocale(LC_ALL, "Spanish");

    int opcion;

    // Mostrar men�
    
    mostrarMenu();

    cout << "Bienvenido! Selecciona la opcion deseada:";
    cin >> opcion;
    
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
    //  Opcion Estadist�cas
    //  Opcion Salir
     
   

    return 0;
}

void mostrarMenu(void)
{
    cout << "\t- Revenge -" << endl;
    cout << "---------------------------" << endl;
    cout << "1 - Jugar" << endl;
    cout << "2 - Estad�sticas" << endl;
    cout << "3 - Cr�ditos" << endl;
    cout << "---------------------------" << endl;
    cout << "0 - Salir" << endl << endl;
}

