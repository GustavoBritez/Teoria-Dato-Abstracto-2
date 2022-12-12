#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "vuelo.h"
struct Estructura_Vuelo
{
    float vectorSalida[2];
    float vectorLLegada[2];
    float vectorEscala[2];
    float distancia;
    char nombre[30];
    int horaSalida;
    float duracion;

};

Vuelo crearVuelo(float vectorSalida[2], float vectorLLegada[2], float vectorEscala[2],char nombre[30], int horaSalida)
{
    Vuelo v = malloc(sizeof(struct Estructura_Vuelo));
    cargarvuelo(v,vectorSalida,vectorLLegada,vectorEscala);
    strcpy(v->nombre, nombre);
    v->horaSalida = horaSalida;
    v->distancia = distanciaV(v);
    v->duracion = duracion(v);
    return v;
}

float distanciaV(Vuelo v)
{
    float x1 = v->vectorSalida[0];
    float y1= v->vectorSalida[1];
    float x2 = v->vectorLLegada[0];
    float y2 = v->vectorLLegada[1];
    float resultado = pow(x1-x2,2) + pow(y2-y1,2);
    resultado = sqrt(resultado);
    return resultado;

}
float duracion(Vuelo v)
{
    int divisor = 500;
    float resultado = (float)v->distancia / divisor;
    resultado = resultado *0.7;
    return resultado;
}

void cargarvuelo(Vuelo v,float vectorSalida[2], float vectorLLegada[2], float vectorEscala[2])
{
    for (int i = 0 ; i < 2 ; i++ )
    {
    v->vectorSalida[i] = vectorSalida[i];
    v->vectorLLegada[i] = vectorLLegada[i];
    v->vectorEscala[i] = vectorEscala[i];
    }
}
void mostrarVuelo(Vuelo v)
{
    printf("\n AEROLINEA %s", v->nombre);
    printf("\n SALIDA : %.2f , %.2f",v->vectorSalida[0],v->vectorSalida[1]);
    printf("\n ESCALA : %.2f , %.2f",v->vectorEscala[0],v->vectorEscala[1]);
    printf("\n LLEGADA: %.2f , %.2f",v->vectorLLegada[0],v->vectorLLegada[1]);
    printf("\n DURACION : %.2f ", v->duracion);
    printf("\n DISTANCIA : %.2f HS ", v->distancia);
}



