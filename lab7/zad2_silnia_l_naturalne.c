/*Funkcję, która oblicza wartość silni
 z liczby naturalnej. Wykorzystaj ją w
  programie wypisującym na wyjście silnię 
  10 pierwszych liczb naturalnych */

#include <stdio.h>

long long int silnia(int);	// lub long long unsigned int silnia(int);

int main()
{
    int liczba;

    printf("Aby obliczyć wartość silni, wprowadź liczbę naturalną:\n");
    scanf("%d", &liczba);
	printf("%d! = %lli\n", liczba, silnia(liczba));
    return 0;
}

long long int silnia(int x)
{
    int a;
    long long int out = 1;

    for (a = 1; a <= x; a++)
	out = out * a;

    return out;
}
