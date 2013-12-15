/*Funkcja rekurencyjna C(n,k) obliczającą 
współczynnik Newtona n po k, czyli liczbę
 podzbiorów k-elementowych zbioru n-elementowego */
/*http://pl.wikipedia.org/wiki/Symbol_Newtona */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int newton(int n, int k)
{
    if (k == 0 || k == n)
	return 1;
    else
	return newton(n - 1, k - 1) + newton(n - 1, k);
}

int main(void)
{
    int x, y;

    printf("Podaj  liczbe x: ");
    scanf("%d", &x);
    printf("Podaj liczbe y: ");
    scanf("%d", &y);
    printf("%d \n", newton(x, y));
    return 0;
}
