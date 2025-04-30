#include <stdio.h>

int main () {
    char mapa[1001][1001];
    int P, inicio_i, inicio_j;

    scanf ("%d", &P);
    int Pinicial = P;

    int i = 0, j = 0;
    while (scanf ("%c", &mapa[i][j]) != EOF) {
        if (mapa[i][j] != '\n') {
            if (mapa[i][j] == 'S') {
                inicio_i = i;
                inicio_j = j;
            }
            j++;
        }
        else {
            i++;
            j = 0;
        }
    }

    i = inicio_i;
    j = inicio_j;
    while (mapa[i][j] != 'E') {
        if (mapa[i][j] == 'o') P--;
        mapa[i][j] = '#';
        if (i > 0 && mapa[i-1][j] != '#') i--;
        else if (j > 0 && mapa[i][j-1] != '#') j--;
        else if (i <= 1000 && mapa[i+1][j] != '#') i++;
        else if (j <= 1000 && mapa[i][j+1] != '#') j++;
    }

    if (P == 0) printf ("Todos morreram :)\n");
    else if (P == Pinicial) printf ("Nenhum morreu :(\n");
    else printf ("%d encontraram o vovo\n", P);

    return 0;
}