#include <iostream>
#include <istream>
#include <string>
#include <ctime>
#include <conio.h>
#include <Windows.h>
#include <clocale> 

#include "funciones.h"
#include "rlutil.h"

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

using namespace std;
using namespace rlutil;

void mostrarMembrete(void)
{

	animacion();
	for (int i = 0; i < 3; i++)
	{

		setColor(RED);
		locate(14, 1);
		cout << "'||'''|, '||''''| \\      // '||''''| '||\   ||` .|'''''| '||''''|";
		animacion();
		locate(14, 2);
		cout << " ||   ||  ||   .   \\    //   ||   .   ||\\  ||  || .      ||   . ";
		animacion();
		locate(14, 3);
		cout << " ||...|'  ||'''|    \\  //    ||'''|   || \\ ||  || |''||  ||'''| ";
		animacion();
		locate(14, 4);
		cout << " || \\     ||         \\//     ||       ||  \\||  ||    ||  ||     ";
		animacion();
		locate(14, 5);
		cout << ".||  \\.  .||....|     \/     .||....| .||   \||. `|....|' .||....|";
		setColor(BLACK);
		locate(14, 1);
		cout << "'||'''|, '||''''| \\      // '||''''| '||\   ||` .|'''''| '||''''|";
		animacion();
		locate(14, 2);
		cout << " ||   ||  ||   .   \\    //   ||   .   ||\\  ||  || .      ||   . ";
		animacion();
		locate(14, 3);
		cout << " ||...|'  ||'''|    \\  //    ||'''|   || \\ ||  || |''||  ||'''| ";
		animacion();
		locate(14, 4);
		cout << " || \\     ||         \\//     ||       ||  \\||  ||    ||  ||     ";
		animacion();
		locate(14, 5);
		cout << ".||  \\.  .||....|     \/     .||....| .||   \||. `|....|' .||....|";
		setColor(RED);
		locate(14, 1);
		cout << "'||'''|, '||''''| \\      // '||''''| '||\   ||` .|'''''| '||''''|";
		animacion();
		locate(14, 2);
		cout << " ||   ||  ||   .   \\    //   ||   .   ||\\  ||  || .      ||   . ";
		animacion();
		locate(14, 3);
		cout << " ||...|'  ||'''|    \\  //    ||'''|   || \\ ||  || |''||  ||'''| ";
		animacion();
		locate(14, 4);
		cout << " || \\     ||         \\//     ||       ||  \\||  ||    ||  ||     ";
		animacion();
		locate(14, 5);
		cout << ".||  \\.  .||....|     \/     .||....| .||   \||. `|....|' .||....|";

	}
	setColor(LIGHTBLUE);

}

void mostrarMenu(void)
{
	system("cls");

	mostrarMembrete();
	locate(28, 6);
	cout << "---------------------------" << endl;
	locate(28, 7);
	cout << "1 - Jugar" << endl;
	locate(28, 8);
	cout << "2 - Estadísticas" << endl;
	locate(28, 9);
	cout << "3 - Créditos" << endl;
	locate(28, 10);
	cout << "4 - Reglas del Juego" << endl;
	locate(28, 11);
	cout << "---------------------------" << endl;
	locate(28, 12);
	cout << "0 - Salir" << endl << endl;

}

void mostrarCreditos(void)
{
	system("cls");

	cout << "\t\t-- Créditos --" << endl;
	SetConsoleTextAttribute(h, 9);
	locate(17, 3);
	cout << "Desarrollado por" << endl;

	for (int i = 0; i < 2; i++)
	{
		setColor(GREY);
		locate(1, 5);
		animacion();
		cout << ".|'''.|  '||'  |'  '||' '|' '|.   '|' '||''''|  |''||''| " << endl;
		locate(1, 6);
		animacion();
		cout << "||..  '   || .'      || |    |'|   |   ||  .       ||   " << endl;
		locate(1, 7);
		animacion();
		cout << " ''|||.   ||'|.       ||     | '|. |   ||''|       ||  " << endl;
		locate(1, 8);
		animacion();
		cout << ".    '||  ||  ||      ||     |   |||   ||          ||  " << endl;
		locate(1, 9);
		animacion();
		cout << "|'....|' .||.  ||.   .||.   .|.   '|  .||.....|   .||. " << endl;
		setColor(DARKGREY);
		locate(1, 5);
		animacion();
		cout << ".|'''.|  '||'  |'  '||' '|' '|.   '|' '||''''|  |''||''| " << endl;
		locate(1, 6);
		animacion();
		cout << "||..  '   || .'      || |    |'|   |   ||  .       ||   " << endl;
		locate(1, 7);
		animacion();
		cout << " ''|||.   ||'|.       ||     | '|. |   ||''|       ||  " << endl;
		locate(1, 8);
		animacion();
		cout << ".    '||  ||  ||      ||     |   |||   ||          ||  " << endl;
		locate(1, 9);
		animacion();
		cout << "|'....|' .||.  ||.   .||.   .|.   '|  .||.....|   .||. " << endl;

	}

	setColor(LIGHTBLUE);
	cout << endl << "    para la Universidad Tecnológica Nacional (FRGP)" << endl << endl;
	animacion();
	locate(12, 13);
	cout << "Marianella Gottig - Legajo: 25508" << endl;
	animacion();
	locate(12, 14);
	cout << "Maria Jose Illanes Saldivia - Legajo: 24512" << endl;
	animacion();
	locate(12, 15);
	cout << "Emiliano Ramírez - Legajo: 25583" << endl << endl;
	locate(12, 17);
	setColor(YELLOW);
	cout << "Juego inventado por Angel Simón.";
	locate(12, 18);
	cout << "Levemente inspirado en el juego Mafia ";
	locate(12, 19);
	cout << "y probablemente en otros juegos";
	locate(12, 20);
	cout << "que ahora Angel no recuerda." << endl;
	setColor(LIGHTBLUE);
	locate(15, 22);
	cout << "Presioná cualquier tecla" << endl;
	locate(12, 23);
	cout << "para volver al menú principal." << endl;
	system("Pause>nul");

}

void mostrarReglas(void)
{
	system("start https://drive.google.com/file/d/1mM-fpiNH6up0WY3vDWNeKnjWMMyuwf67/view");
}

bool confirmacion(void)
{
	char conf;

	system("cls");

	cout << endl << "\t¿Querés salir del juego?" << endl;
	cout << "\t   S -- Si | N -- No" << endl;
	cin >> conf;

	conf = toupper(conf);

	if (conf == 'S')
	{
		return true;
	}
	else if (conf == 'N')
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

		cout << "Tirando dados..." << endl << endl;
		rollDados();
		dadocomienzo1 = 1 + rand() % 6;

		cout << "Salio el: " << dadocomienzo1 << endl << endl;

		cout << j2 << " presioná Enter para tirar tu dado." << endl;
		system("Pause>nul");

		cout << "Tirando dados..." << endl << endl;
		rollDados();
		dadocomienzo2 = 1 + rand() % 6;

		cout << "Salio el: " << dadocomienzo2 << endl << endl;

		if (dadocomienzo1 == dadocomienzo2)
		{
			cout << "Empate. Presioná cualquier tecla para volver a tirar." << endl;
			anykey();
			reroll = true;
			system("cls");
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

	rollDados();
	cout << "\tDado 1: " << dado1 << endl;
	rollDados();
	cout << "\tDado 2: " << dado2 << endl;
	return suma;

}

void rollDados(void)
{
	int segs = 2;
	while (segs >= 1)
	{
		Sleep(380);
		segs--;
	}
}

void animacion(void)
{
	int segs = 2;
	while (segs >= 1)
	{
		Sleep(24);
		segs--;
	}
}

void tiradaJugador(int v[], int dadosStock)
{
	for (int i = 0; i < dadosStock; i++)
	{
		v[i] = 1 + rand() % 6;

	}

	for (int i = 0; i < dadosStock; i++)
	{
		cout << " | Dado " << i + 1;
	}

	cout << " |" << endl << " " << "|";

	for (int i = 0; i < dadosStock; i++)
	{
		rollDados();
		if (i == 0)
		{
			cout << "   " << v[i] << "	  |";
		}
		else
		{
			cout << "    " << v[i] << "  " << " |";
		}
	}

}

int TotalDadosStock(int dadosStockJA, int contadorDE)
{

	int totalDS;
	totalDS = dadosStockJA - contadorDE;

	return totalDS;
}

int puntajeRonda(int dadosDS, int totalSS)
{

	int puntajeRonda = 0;

	puntajeRonda = dadosDS * totalSS;

	return puntajeRonda;
}

void mostrarDadosElegidos(int v2[], int size)
{
	cout << "Dados elegidos: { ";

	for (int ds = 0; ds < size; ds++)
	{
		if (ds == size - 1)
		{
			cout << v2[ds];
		}
		else
		{
			cout << v2[ds] << " + ";
		}
	}

	cout << " }";
}