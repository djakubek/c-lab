/*Program, który wczyta ze stdin 6 liczb 
całkowitych do tablicy, a następnie wypisze
 zawartość tej tablicy od początku i od końca*/
 
#include <stdio.h>

int main()
{
  int tab[6];
  int i;

  i = 0;
  while (i < 6)
  {
    printf("Podaj liczbę: ");
    scanf("%d", &tab[i]);
    ++i;
  }
  for (i = 0; i < 6; i++)
  {
  printf("%d\n", tab[i]);
  }
  for (i = 6; i > 0; i--)
  {
  printf("%d\n", tab[i]);
  }
  return 0;
}