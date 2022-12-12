#ifndef VUELO_H_INCLUDED
#define VUELO_H_INCLUDED
struct Estructura_Vuelo;

typedef struct Estructura_Vuelo * Vuelo;

Vuelo crearVuelo(float vectorSalida[2], float vectorLLegada[2], float vectorEscala[2],char nombre[30], int horaSalida);
Vuelo cargarVacio(Vuelo v);


void cargarvuelo(Vuelo v,float vectorSalida[2], float vectorLLegada[2], float vectorEscala[2]);
void mostrarVuelo(Vuelo v);
float distanciaV(Vuelo v);
float duracion(Vuelo v);
#endif // VUELO_H_INCLUDED
