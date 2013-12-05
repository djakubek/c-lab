/*Program, który wyliczy sumę liczb naturalnych od 1 do liczby n
 podanej przez użytkownika. Kiedy użytkownik poda liczbę mniejszą niż 1, 
 to program powinien wypisać stosowny komunikat o błędzie */

#include <stdio.h>
int main()
{
  int n, x;
  x = 1;

  printf("Podaj dowolną liczbę: ");
  scanf("%d", &n);

  if (n < 1)
  {
    printf("Podaj liczbę większą niż 0.\n");
  }

  for (x = 1; x <= n; x++)
  {
    printf("%d\n", x);
  }
  return 0;
}