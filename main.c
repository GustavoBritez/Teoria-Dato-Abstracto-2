#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "vuelo.h"

int main()
{
    float vectorSalida[2] = {220.31, 1130.22};
    float vectorEscala[2] = {1100.00, 550.32};
    float vectorLLegada[2] = {1049.33, 61.41};

    Vuelo v1 = crearVuelo(vectorSalida,vectorLLegada,vectorEscala,"Aerolineas Argentina",12);
    mostrarVuelo(v1);
    return 0;
}
