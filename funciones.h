#pragma once

void mostrarMenu(void);

void mostrarCreditos(void);

void mostrarReglas(void);

void mostrarMembrete(void);

void mostrarMembrete2(void);

void mostrarDadosElegidos(int v2[], int size);

bool confirmacion(void);

bool establecerPrimerJugador(char j1[], char j2[]);

bool establecerPrimerJugadorManual(char j1[], char j2[]);

int tiradaNumeroObjetivo(void);

int tiradaNumeroObjetivoManual(void);

void tiradaJugador(int v[], int dadosStock);

void tiradaJugadorManual(int v[], int dadosStock);

void rollDados(void);

void animacion(void);

int TotalDadosStock(int dadosStock, int contadorDE);

int puntajeRonda(int contadorDS, int totalSS);

int puntajeRondaBonif(int dadosDS, int totalSS);