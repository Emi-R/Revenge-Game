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

void mostrarMembrete2(void)
{

	for (int i = 0; i < 3; i++)
	{

		setColor(RED);
		locate(14, 1);
		cout << "'||'''|, '||''''| \\      // '||''''| '||\   ||` .|'''''| '||''''|";
		locate(14, 2);
		cout << " ||   ||  ||   .   \\    //   ||   .   ||\\  ||  || .      ||   . ";
		locate(14, 3);
		cout << " ||...|'  ||'''|    \\  //    ||'''|   || \\ ||  || |''||  ||'''| ";
		locate(14, 4);
		cout << " || \\     ||         \\//     ||       ||  \\||  ||    ||  ||     ";
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
	cout << "----------------------------" << endl;
	locate(37, 7);
	cout << "1 - Jugar" << endl;
	locate(34, 8);
	cout << "2 - Estadísticas" << endl;
	locate(36, 9);
	cout << "3 - Créditos" << endl;
	locate(32, 10);
	cout << "4 - Reglas del Juego" << endl;
	locate(28, 11);
	cout << "----------------------------" << endl;
	locate(37, 12);
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

		cout << endl << "\tTirando dados..." << endl << endl;
		rollDados();
		dadocomienzo1 = 1 + rand() % 6;

		cout << "\t-----------------" << endl;
		cout << "\t   Salio el: " << dadocomienzo1 << endl << endl;

		cout << j2 << " presioná Enter para tirar tu dado." << endl;
		system("Pause>nul");

		cout << endl << "\tTirando dados..." << endl << endl;
		rollDados();
		dadocomienzo2 = 1 + rand() % 6;

		cout << "\t-----------------" << endl;
		cout << "\t   Salio el: " << dadocomienzo2 << endl << endl;

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

bool establecerPrimerJugadorManual(char j1[], char j2[])
{
	int dadocomienzo1;
	int dadocomienzo2;
	bool reroll = false;
	bool reroll2 = false;

	do
	{
		do
		{
			cout << j1 << " ingresá tu dado: ";
			cin >> dadocomienzo1;

			if (dadocomienzo1 > 6 || dadocomienzo1 < 1)
			{
				cout << j1 << " ingresaste un numero mayor a 6, numero negativo o un cero. Volvé a ingresar!" << endl << endl;
				reroll2 = false;
			}
			else
			{
				reroll2 = true;
			}
		} while (reroll2 == false);

		do
		{
			cout << j2 << " ingresá tu dado: ";
			cin >> dadocomienzo2;

			if (dadocomienzo2 > 6 || dadocomienzo2 < 1)
			{
				cout << j2 << " ingresaste un numero mayor a 6, número negativo o un cero. Volvé a ingresar!" << endl << endl;
				reroll2 = false;
			}
			else
			{
				reroll2 = true;
			}

		} while (reroll2 == false);

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

int tiradaNumeroObjetivoManual(void)
{
	int dado1, dado2, suma;
	bool reroll = false;
	do
	{
		cout << "Ingresa el dado 1: ";
		cin >> dado1;
		if (dado1 > 12 || dado1 < 1)
		{
			cout << "Ingresaste un numero mayor a 12, numero negativo o un cero. Volvé a ingresar!" << endl << endl;
			reroll = false;
		}
		else
		{
			reroll = true;
		}
	} while (reroll == false);

	do
	{
		cout << "Ingresa el dado 2: ";
		cin >> dado2;
		if (dado2 > 12 || dado2 < 1)
		{
			cout << "Ingresaste un numero mayor a 12, numero negativo o un cero. Volvé a ingresar!" << endl << endl;
			reroll = false;
		}
		else
		{
			reroll = true;
		}
	} while (reroll == false);

	suma = dado1 + dado2;

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

void tiradaJugadorManual(int v[], int dadosStock)
{
	for (int i = 0; i < dadosStock; i++)
	{
		int n;
		cout << "Ingrese dado " << i + 1 << ": ";
		cin >> n;
		if (n > 6 || n < 1)
		{
			cout << "Ingresaste un numero mayor a 6, numero negativo o un cero. Volve a intentar" << endl << endl;
			i = i - 1;
		}
		else
		{
			v[i] = n;
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

int puntajeRondaBonif(int dadosDS, int totalSS)
{

	int puntajeRonda = 0;

	puntajeRonda = dadosDS * totalSS;

	puntajeRonda *= 1.50;

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

void reiniciarDadosElegidos(bool v[], int dadosStock)
{

	for (int i = 0; i < dadosStock; i++)
	{
		v[i] = false;
	}

}