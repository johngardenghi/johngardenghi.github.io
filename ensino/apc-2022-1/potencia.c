#include <stdio.h>

int potencia (int a, int b); // prototipo da funcao

int main () {
    int a, b;
    scanf ("%d %d", &a, &b);
    printf ("%d elevado a %d = %d\n", a, b, potencia (a, a));
    return 0;
}

int potencia (int a, int b) {
    int resultado = 1;
    for (int i = 0; i < b; i++)
        resultado *= a;
    return resultado;
}