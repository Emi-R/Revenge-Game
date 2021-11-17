#include <iostream>
#include <string>
#include <ctime>
#include <conio.h>
#include <Windows.h>
#include <clocale> 

#include "funciones.h"
#include "rlutil.h"

using namespace std;
using namespace rlutil;

//funcion que recibe el total de contador de dados stock y el total de la suma seleccionada, y el num de x

int main()
{
	setlocale(LC_ALL, "Spanish");
	srand(time(NULL));

	// Variables de menu
	int opcion;
	bool salir = false;

	int MayorPuntaje = 0;
	char JugadorMayorPuntaje[50] = {};

	int puntajeTotalJI;
	int puntajeTotalJS;

	char jugador1[50] = {};
	char jugador2[50] = {};

	char jugadorInicial[52] = {};
	char jugadorSecundario[52] = {};

	int dadosStockJI;
	int dadosStockJS;

	int sumaseleccionada = 0;
	int numObj;
	int dadoelegido;
	int contadorDadosElegidos;

	int puntajeTotalGanador = 0;

	bool BPenalizacion = 0;
	bool primerJugadorJ1 = false;
	bool finalizarPartida = false;

	bool modoAutomatico = false;
	char modo;
	bool validacion = false;

	int contadorImpares;
	bool bonificacion = false;
	setBackgroundColor(BLACK);

	do
	{
		// Funcion para mostrar menú
		mostrarMenu();
		locate(22, 14);
		cout << "Bienvenido! Seleccioná la opcion deseada: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1: // Opcion Jugar

			system("cls");

			// Pedir Nombres
			cout << "Jugador uno, ingresá tu nombre: ";
			cin >> jugador1;

			cout << "Jugador dos, ingresá tu nombre: ";
			cin >> jugador2;

			do
			{

				cout << endl << "Que modo deseas usar?" << endl << endl;
				cout << "Automático: La máquina genera los números al azar. Ingresá A para este modo" << endl;
				cout << "Manual: Los dados los ingresa el usuario. Ingresá M para este modo" << endl;
				cin >> modo;

				modo = toupper(modo);

				if (modo == 'A')
				{
					modoAutomatico = true;
					validacion = true;
				}
				else
				{
					if (modo == 'M')
					{
						modoAutomatico = false;
						validacion = true;
					}
					else
					{
						cout << "Opción inválida. Por favor ingresá de nuevo." << endl;
						anykey();
						system("cls");
						validacion = false;
					}
				}
			} while (validacion == false);

			system("cls");

			cout << "Comienza el juego! Se determinará que jugador tira primero." << endl;
			cout << "El jugador que tire el dado mas alto empieza tirando." << endl << endl;

			// Funcion de establecer primer jugador
			if (modoAutomatico == true)
			{
				primerJugadorJ1 = establecerPrimerJugador(jugador1, jugador2);
			}
			else
			{
				primerJugadorJ1 = establecerPrimerJugadorManual(jugador1, jugador2);
			}

			if (primerJugadorJ1 == true)

			{
				memcpy(jugadorInicial, jugador1, 50);
				memcpy(jugadorSecundario, jugador2, 50);
			}
			else
			{
				memcpy(jugadorInicial, jugador2, 50);
				memcpy(jugadorSecundario, jugador1, 50);
			}

			cout << jugadorInicial << " sacó el número mas alto! Comienza tirando." << endl;

			anykey();
			system("cls");

			puntajeTotalJI = 0;
			puntajeTotalJS = 0;

			dadosStockJI = 6;
			dadosStockJS = 6;

			contadorDadosElegidos = 0;
			BPenalizacion = 0;

			int dadosStockJugadorActual;
			int dadosStockJugadorInactivo;

			finalizarPartida = false;

			//Empiezan las rondas
			for (int i = 1; i <= 5; i++)
			{

				for (int x = 1; x <= 2; x++)
				{

					sumaseleccionada = 0;

					int vTiradaJugadorActual[12] = {};
					int vTiradaDadosSeleccionados[12] = {};
					char jugadorActual[50] = {};
					char jugadorInactivo[50] = {};
					int puntajePorRonda = 0;

					contadorImpares = 0;
					bonificacion = false;

					if (i == 1 && x == 1)
					{
						contadorDadosElegidos = 0;
					}

					// Cambia por cada ronda el "jugador actual" y el "jugador inactivo". Esto es para mostrar a quien se envia cada dado despues de cada ronda.
					if (x == 1)
					{
						memcpy(jugadorActual, jugadorInicial, 50); //asigna el nombre del jugador actual a jugadorActual
						memcpy(jugadorInactivo, jugadorSecundario, 50);

						dadosStockJugadorActual = dadosStockJI + contadorDadosElegidos; //Le da al stock del jugador actual el valor de dados stock jugadorInicial
						dadosStockJugadorInactivo = dadosStockJS;
					}
					else
					{
						memcpy(jugadorActual, jugadorSecundario, 50);
						memcpy(jugadorInactivo, jugadorInicial, 50);

						dadosStockJugadorActual = dadosStockJS + contadorDadosElegidos;
						dadosStockJugadorInactivo = dadosStockJI;
					}

					if (BPenalizacion == 1)
					{
						dadosStockJugadorActual--;
						BPenalizacion = 0;
					}

					contadorDadosElegidos = 0;

					system("cls");
					setColor(WHITE);
					cout << "\t---- Ronda: " << i << " ----" << endl;
					cout << "\t---- Turno de: " << jugadorActual << " ----" << endl;
					cout << "\t---- Dados Stock " << jugadorActual << ": " << dadosStockJugadorActual << " ----" << endl;
					cout << "\t---- Dados Stock " << jugadorInactivo << ": " << dadosStockJugadorInactivo << " ----" << endl;
					cout << "\t---- Puntaje " << jugadorInicial << ": " << puntajeTotalJI << " ----" << endl;
					cout << "\t---- Puntaje " << jugadorSecundario << ": " << puntajeTotalJS << " ----" << endl << endl;
					setColor(LIGHTBLUE);
					cout << jugadorActual << " presioná Enter para tirar los dados." << endl;
					cout << "El número que salga sera el número objetivo." << endl;

					anykey();
					cout << "Tirando dados..." << endl << endl;
					rollDados();

					//Funcion para calcular el numero objetivo
					if (modoAutomatico == true)
					{
						numObj = tiradaNumeroObjetivo();
					}
					else
					{
						numObj = tiradaNumeroObjetivoManual();
					}

					cout << "\t-----------------" << endl;
					cout << "\tNumero objetivo: " << numObj << endl << endl;

					cout << jugadorActual << " presioná Enter para tirar los dados." << endl;
					anykey();

					cout << endl << "\t\t\tTirando dados..." << endl << endl;
					setColor(BROWN);

					// Funcion que simula la tirada de los dados stock
					if (modoAutomatico == true)
					{
						tiradaJugador(vTiradaJugadorActual, dadosStockJugadorActual);
					}
					else
					{
						tiradaJugadorManual(vTiradaJugadorActual, dadosStockJugadorActual);
					}
					setColor(LIGHTBLUE);

					cout << endl << endl << "\t-- Seleccioná los dados de la tirada a sumar --" << endl;

					do
					{
						cout << endl << "Elegi la posicion del dado o ingresá 0 para pasar el turno: ";
						cin >> dadoelegido;

						if (dadoelegido > 1 && dadoelegido <= dadosStockJugadorActual)
						{
							vTiradaDadosSeleccionados[contadorDadosElegidos] = vTiradaJugadorActual[dadoelegido - 1];
							contadorDadosElegidos++;
							sumaseleccionada += vTiradaJugadorActual[dadoelegido - 1];

							if (vTiradaJugadorActual[dadoelegido - 1] % 2 != 0)
							{
								contadorImpares++;
							}

							vTiradaJugadorActual[dadoelegido - 1] = 0;

							cout << "Suma de los dados seleccionados: " << sumaseleccionada;

							cout << endl;
						}
						else
							if (dadoelegido == 0)
							{
								sumaseleccionada = 0;
								contadorDadosElegidos = 0;
							}
							else
							{
								setColor(RED);
								cout << "El dado elegido no se encuentra en sus dados stock. Volve a intentarlo! " << endl;
								setColor(LIGHTBLUE);
							}

					} while ((sumaseleccionada != numObj) && (dadoelegido != 0));

					if (contadorImpares == contadorDadosElegidos)
					{
						bonificacion = true;
					}

					//Funcion para calcular el puntaje de cada ronda
					if (bonificacion == true)
					{
						puntajePorRonda = puntajeRondaBonif(contadorDadosElegidos, sumaseleccionada);
					}
					else
					{
						puntajePorRonda = puntajeRonda(contadorDadosElegidos, sumaseleccionada);
					}

					if ((sumaseleccionada == numObj) && (contadorDadosElegidos == dadosStockJugadorActual))
					{
						setColor(LIGHTGREEN);
						cout << jugadorActual << " ganó la partida!! Su tirada ha sido exitosa y se quedó sin dados. " << endl << endl;
						setColor(LIGHTBLUE);

						if (x == 1)
						{
							puntajeTotalJI = puntajeTotalJI + puntajePorRonda + 10000;
						}
						else
						{
							puntajeTotalJS = puntajeTotalJS + puntajePorRonda + 10000;
						}

						x = 2;
						i = 5;
						finalizarPartida = true;

					}
					else
						if (sumaseleccionada == numObj)
						{
							setColor(LIGHTGREEN);
							cout << endl << "Suma selecccionada con exito. Su tirada ha sido una tirada exitosa." << endl << endl;
							if (bonificacion == true)
							{
								cout << "Ha logrado la suma seleccionada con todos numeros impares." << endl;
								cout << "Obtiene una bonificacion del 50% sobre los puntos obtenidos!!" << endl;
							}

							setColor(WHITE);
							cout << "Suma objetivo: " << numObj << endl;
							// Funcion que muestra los dados elegidos en esa ronda
							mostrarDadosElegidos(vTiradaDadosSeleccionados, contadorDadosElegidos);

							cout << endl << "Puntaje de la ronda: " << puntajePorRonda << endl;
							cout << "Dados enviados a " << jugadorInactivo << ": " << contadorDadosElegidos << endl << endl;
							setColor(LIGHTBLUE);
							cout << "Presioná Enter para continuar.";
							anykey();
						}
						else
						{
							setColor(RED);
							cout << "No ha logrado una tirada exitosa." << endl;

							if (dadosStockJugadorInactivo > 1)
							{
								cout << jugadorActual << " sufre penalización. " << jugadorInactivo << " le envía un dado." << endl;
								setColor(LIGHTBLUE);
								BPenalizacion = 1;
							}
							else
							{
								setColor(LIGHTCYAN);
								cout << "Safó " << jugadorActual << ". No sufre penalización ya que " << jugadorInactivo << " tiene 1 solo dado stock" << endl;
								setColor(LIGHTBLUE);
							}
							anykey();
						}

					// Funcion que calcula los dados stock, restando los dados elegidos a la cantidad actual de dados stock
					dadosStockJugadorActual = TotalDadosStock(dadosStockJugadorActual, contadorDadosElegidos);

					if (BPenalizacion == 1 && i != 5)
					{
						dadosStockJugadorActual++;
					}

					if (x == 1 && finalizarPartida == false)
					{
						dadosStockJI = dadosStockJugadorActual;
						puntajeTotalJI = puntajeTotalJI += puntajePorRonda;
					}
					else
						if (finalizarPartida == false)
						{
							dadosStockJS = dadosStockJugadorActual;
							puntajeTotalJS = puntajeTotalJS += puntajePorRonda;
						}
				}
			}

			if (puntajeTotalJI > MayorPuntaje)
			{
				MayorPuntaje = puntajeTotalJI;
				memcpy(JugadorMayorPuntaje, jugadorInicial, 50);
			}
			if (puntajeTotalJS > MayorPuntaje)
			{
				MayorPuntaje = puntajeTotalJS;
				memcpy(JugadorMayorPuntaje, jugadorSecundario, 50);
			}
			setColor(WHITE);
			cout << endl << " \t--- Partida finalizada!! --- " << endl;
			if (puntajeTotalJI > puntajeTotalJS)
			{
				setColor(LIGHTGREEN);
				cout << "\tEl ganador es: " << jugadorInicial << endl;
			}
			else
				if (puntajeTotalJI < puntajeTotalJS)
				{
					cout << "\tEl ganador es: " << jugadorSecundario << endl;
				}
				else
				{
					cout << "\tEl ganador es: " << jugadorInicial << endl;
				}
			setColor(WHITE);
			cout << endl << "\t-----------------" << endl << endl;
			cout << "\tPuntuaciones finales: " << endl << endl;

			if (primerJugadorJ1 == true)

			{
				cout << "\t" << jugador1 << ": " << puntajeTotalJI << endl;
				cout << "\t" << jugador2 << ": " << puntajeTotalJS << endl;
			}
			else
			{
				cout << "\t" << jugador1 << ": " << puntajeTotalJS << endl;
				cout << "\t" << jugador2 << ": " << puntajeTotalJI << endl;
			}
			setColor(LIGHTBLUE);
			cout << endl << "Presioná cualquier tecla para volver al menú principal." << endl;
			anykey();

			break;
		case 2: // Opción Estadísticas
			system("cls");

			mostrarMembrete2();

			locate(28, 7);
			cout << "---- Estadísticas ----" << endl << endl;
			locate(25, 9);
			cout << "      Jugador: " << JugadorMayorPuntaje << endl << endl;
			locate(25, 10);
			cout << "      Mayor Puntaje: " << MayorPuntaje << endl;
			locate(27, 12);
			cout << "Presioná cualquier tecla" << endl;
			locate(27, 13);
			cout << "para volver al menú principal." << endl;
			system("Pause>nul");
			break;
		case 3:// Opción Créditos
			mostrarCreditos();
			break;
		case 4:// Opción Mostrar Reglas
			mostrarReglas();
			break;
		case 0:
			salir = confirmacion();
		default:
			break;
		}

	} while (salir == false);

	return 0;
}