/*program, który wczyta dwie liczby całkowite a i b (a<b)
 a następnie wypisze wszystkie liczby całkowite pomiędzy a i b. */
#include <stdio.h>

int main(){
	int x,y;

 printf("podaj pierwsza liczbe: ");
 scanf("%d",&x);
 printf("podaj druga liczbe: ");
 scanf("%d",&y);
	while (x < y){			// Jeszcze dopracowac jesli liczba druga jest mniejsza ? 
    printf("%d \n", x);
     ++x;
    }   
return 0; 
}