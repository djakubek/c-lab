/* Funkcja, która po wczytaniu liczby całkowitej wypisze jej cyfry
zaczynając od ostatniej i kończąc na pierwszej. Na przykład po wczytaniu liczby '1410' funkcja powinna wypisać '0141'. */

#include <stdio.h>
#include <stdlib.h>

char *inverted(int x);

int main() {
  int a;

  printf("Wprowadź liczbę: ");
  scanf("%d", &a);
  printf("Cyfry od końca: %s\n", inverted(a));
  printf("\n");

  return 0;
}

char *inverted(int x) {

  char *znaki = malloc(10);
  int i = 0;

  while (x > 0) {
    znaki[i] = '0' + x % 10;
    x = x / 10;
    i++;
  }
 
  znaki[i] = '\0';

  return znaki;
}