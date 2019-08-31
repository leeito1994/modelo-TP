#include <stdio.h>
#include <stdlib.h>
#include "operacionesmath.h"

int main()
{
    int operador = pedirOperacion();

    int numero1 = pedirNumero();

    int numero2 = pedirNumero();

    if (calcular(numero1,numero2,operador) == 0)
    {
        printf("la operacion no se puede realizar");
    }

    return 0;
}
