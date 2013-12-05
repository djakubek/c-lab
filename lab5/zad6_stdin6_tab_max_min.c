/*Program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy, a następnie wyszuka i wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy*/

#include <stdio.h>
int main()
{
  int tab[6];
  int max, min;
  int i = 0;

  while (i < 6)
  {
    printf("Podaj liczbę calkowita: ");
    scanf("%d", &tab[i]);
    ++i;
  }

  max = tab[0];
  for (i = 0; i < 6; i++)
  {
    if (tab[i] > max)
    max = tab[i];
  }

  min = tab[0];
  for (i = 0; i < 6; i++)
  {
    if (tab[i] < min)
    min = tab[i];
  }

  printf("Liczba maksymalna to: %d, a minimalna to: %d\n", max, min);

  return 0;
}