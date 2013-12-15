/* Funkcja rekurencyjna odwracającą kolejność
liter w napisie podanym na wejściu. */


#include <stdio.h>
#include <string.h>

void swap(char *a, char *b);
void odwroc(char *str, char *bufor);
void reverse(char *str, int n, int r);

int main(void) {

  char bufor[50];

  printf("Wpisz ciąg znaków: ");
  scanf("%s", bufor);

  odwroc(bufor);
  printf("Odwrócona kolejność: %s\n", bufor);

  return 0;
}

void odwroc(char *str, char *bufor) {
  reverse(bufor, 0, strlen(str) - 1);
}

void reverse(char *str, int n, int r) {
  if (r <= n)
    return;
  swap(str + n, str + r);
  reverse(str, n + 1, r - 1);
}

void swap(char *a, char *b) {
  char c;
  c = *a;
  *a = *b;
  *b = c;
}