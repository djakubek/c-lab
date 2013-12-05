/* Program, który ze stdin wczyta 6
liczb rzeczywistych do tablicy, a 
następnie wypisze liczbę liczb 
dodatnich w niej zawartych */

#include <stdio.h>

int main(void)
{

    int tab[6], i = 0, x;

    while (i < 6) {
	printf("podaj liczbe \n");
	scanf("%d", &tab[i]);
	++i;
    }
    for (i = 0; i < 6; ++i) {
	if (tab[i] >= 0)
	    ++x;
    }
    printf("Ilosc liczb dodatnich to : %d \n", x);

    return 0;
}
