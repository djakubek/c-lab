/*
Napisz funkcję, która zwraca różnicę między największym
i najmniejszym elementem tablicy podanej jako argument funkcji.
Przetestuj ją w prostym programie.
*/
/*c99 */

#include <stdio.h>

// void minmax(int tab[], int length, int *min, int *max);

struct mm {
  int min;
  int max;
};

struct mm minmax(int tab[], int length);

int main() {
  int length, int_tab[10];
  int x;
  struct mm res;

  printf("Podaj liczbę elementów tablicy (do 10): ");
  scanf("%d", &length);

  for (int i = 0; i < length; i++) {
    printf("Element %d: ", (i + 1));
    scanf("%d", &int_tab[i]);
  }

  res = minmax(int_tab, length);
  x = res.max - res.min;
  printf("Najmniejszy element to %d, największy to %d, a roznica to : %d\n", res.min, res.max, x);
  return 0;
}

struct mm minmax(int tab[], int length ) {
  int max = 0, min = 0;
  struct mm wyniki;
  wyniki.max = 0; wyniki.min = 0;
  
  wyniki.min = tab[0];
  wyniki.max = tab[0];
  for (int i = 1; i < length; i++) {
    if (tab[i] > wyniki.max) {
      wyniki.max = tab[i];
    }
    if (tab[i] < wyniki.min) {
      wyniki.min = tab[i];
    }
  }
  return wyniki;
}