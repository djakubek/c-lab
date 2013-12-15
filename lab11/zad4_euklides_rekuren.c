/* Korzystając z twierdzenia Euklidesa, napisać program
obliczający rekurencyjnie największy wspólny dzielnik
z liczb podanych na wejściu 4*/

#include <stdio.h>

int dzielnik(int x, int y);

int main(void) {
  int liczba1, liczba2, nwd;

  printf("Podaj pierwszą liczbę: ");
  scanf("%d", &liczba1);
  printf("Podaj drugą liczbę: ");
  scanf("%d", &liczba2);

  nwd = dzielnik(liczba1, liczba2);
  printf("Największy wspólny dzielnik: %d\n", nwd);
  return nwd;
}

int dzielnik(int x, int y) {

  if (x == 0)
    return y;
  return dzielnik(y % x, x);
}