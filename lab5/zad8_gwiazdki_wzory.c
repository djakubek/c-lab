/* Program rozmieszczający poniższe wzory 
oddzielnie jeden pod drugim. Użyj pętli for 
do generowania wzorów. Do wypisywania gwiazdek 
należy użyć instrukcji putchar('*') (powodującej 
wyświetlanie ich obok siebie). Uwaga: dwa ostatnie 
wzory wymagają, by każdy wiersz zaczynał się od 
odpowiedniej liczby spacji */

#include <stdio.h>
int wzor(int x, int y);

int main() {
  int x = 1, j = 0, i;

  while (j <= 3) {
    int tab[7] = {x, 8-x, 5-x, (x+1)*2, tab[2], tab[1], x};
    i = 0;
    while (i <= 6) {
      wzor(tab[i], i);
      i++;
    }
    printf("\n");
    x++;
    j++;
  }
  return 0;
}

int wzor(x, y) {
  int i = 0;

  while(i < x) {
    if (y%2 == 0)
      putchar('*');
    else
      putchar(' ');
    i++;
  }
  return 0;
}
