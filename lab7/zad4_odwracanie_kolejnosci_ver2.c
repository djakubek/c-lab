#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverted(int x);

int main() {
  int a;

  printf("Wprowadź liczbę: ");
  scanf("%d", &a);
  printf("Cyfry od końca:\n");
  inverted(a);
  printf("\n");

  return 0;
}

void inverted(int x) {
  char *znaki = malloc(23); // malloc(sizeof long long int);
  /* x -- liczba ==> napis */
  sprintf(znaki, "%d", x); // sprintf() ==> dostaniemy tę liczbę w napisie
  int len = strlen(znaki);

  printf("Liczba cyfr: %d\n", len);

  while (len >= 0) { // (długość > 0)
    printf("%c", znaki[len]);
    len--;
  }
}

