#include <stdio.h>
#include "apcmath.h"

int main () {
    double base;
    int expoente;

    printf ("Digite a base: ");
    scanf ("%lf", &base);

    printf ("Digite o expoente: ");
    scanf ("%d", &expoente);

    printf ("%lf elevado a %d = %lf\n", base, expoente, potencia(base, expoente));
    return 0;
}