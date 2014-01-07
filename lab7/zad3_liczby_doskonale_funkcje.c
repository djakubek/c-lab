/* Liczba doskonała to liczba, która jest sumą podzielników 
od niej mniejszych. Na przykład 6 jest liczbą doskonałą ponieważ:
 1 + 2 + 3 = 6 Napisz funkcję, która wypisze wszystkie liczby
  doskonałe mniejsze od 10 000. */

# include <stdio.h>
# include <math.h>

int is_perfect(int i);

int main (void) {
 int i;
  
 for (i=1; i <= 10000 ; i++) {
  if (is_perfect(i))
   printf("%d\n", i);
 }

 return 0;
}

int is_perfect(int i) {
 int licznik, suma_dziel, wynik;

 suma_dziel = 0;
 licznik = 1;
 
 while (licznik <= i/2) {
  if (i % licznik == 0) {
   suma_dziel = suma_dziel + licznik;
   ++licznik;
  }
  else
   ++licznik;
            
 }
  if (suma_dziel == i)
   wynik = 1;
  else
   wynik = 0;

 return wynik;
}