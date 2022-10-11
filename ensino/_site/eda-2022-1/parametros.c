#include <stdio.h>

void troca (int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
    printf ("NA FUNCAO: a = %d, b = %d\n", a, b);
}

void troca2 (int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf ("NA FUNCAO: a = %d, b = %d\n", *a, *b);
}

void troca3 (int *v, int i, int j) {
    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}

int main () {
    int a, b;
    int v[3];
    a = -4;
    b = 10;
    v[0] = -1;
    v[1] = 13;
    v[2] = -253;

    printf ("v[0] = %d, v[1] = %d, v[2] = %d\n", v[0], v[1], v[2]);
    troca3 (v, 0, 2);
    printf ("v[0] = %d, v[1] = %d, v[2] = %d\n", v[0], v[1], v[2]);
    /*
    printf ("  NA MAIN: a = %d, b = %d\n", a, b);
    // troca (a, b);
    troca2 (&a, &b);
    printf ("  NA MAIN: a = %d, b = %d\n", a, b);
    */
    
    return 0;
}