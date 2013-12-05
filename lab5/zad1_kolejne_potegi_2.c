/*Program, który wypisuje kolejne potęgi 
liczby 2 nie przekraczające 2010*/
#include <stdio.h>

int main()
{
    int wynik = 1;
   /* while (wynik <= 2010) {  // innna mozliwosc gorsza
	printf("%d \n", wynik);    
	wynik *= 2;
    } */
    for (wynik = 1; wynik <= 2010; wynik *= 2)
    {
    	printf("%d \n", wynik);
    }
    return 0;
}
