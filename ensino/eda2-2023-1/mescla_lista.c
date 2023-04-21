#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

void imprime_lista (celula *le) {
  le = le->prox;
  printf ("le");
  while (le != NULL) {
    printf (" -> %d", le->dado);
    le = le->prox;
  }
  printf (" -> NULL\n");
}

void mescla_listas (celula *l1, celula *l2, celula *l3) {
  l1 = l1->prox;
  l2 = l2->prox;
  while (l1 != NULL && l2 != NULL) {
    if (l1->dado < l2->dado) {
      l3->prox = l1;
      l1 = l1->prox;
    }
    else {
      l3->prox = l2;
      l2 = l2->prox;
    }
    l3 = l3->prox;
  }

  if (l1 != NULL) l3->prox = l1;
  if (l2 != NULL) l3->prox = l2;
}

int main () {
  celula l1, l2, l3;
  celula celula1;
  celula celula2;
  celula celula3;
  celula celula7;
  celula celula8;
  celula celula9;
  celula celula10;

  celula1.dado = 1;
  celula2.dado = 2;
  celula3.dado = 3;
  celula7.dado = 7;
  celula8.dado = 8;
  celula9.dado = 9;
  celula10.dado = 10;

  l1.prox = &celula1;
  celula1.prox = &celula7;
  celula7.prox = &celula9;
  celula9.prox = &celula10;
  celula10.prox = NULL;
  
  l2.prox = &celula2;
  celula2.prox = &celula3;
  celula3.prox = &celula8;
  celula8.prox = NULL;

  imprime_lista (&l1);
  imprime_lista (&l2);

  mescla_listas (&l1, &l2, &l3);

  printf ("\n");
  imprime_lista (&l3);

  return 0;
}
