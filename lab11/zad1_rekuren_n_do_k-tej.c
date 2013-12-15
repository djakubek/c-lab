/*Rekurencyjną implementację funkcji obliczającej nk (n do potęgi k) */

#include <stdio.h>

/*potega: n^k = n * n ... *n --k razy */
/* n^k = n* n^{k-1} */

long long int potega(int n, int k){
    if(k == 0) {
        return 1;   
    }else {

    }
    return n * potega(n, k-1);
    }

int main(void){

    int x, y;
    long long int wynik;

    printf("Obliczanie potegi\n");
    printf("podaj podstawe: ");
    scanf("%d", &x);
    printf("podaj wykladnik: ");
    scanf("%d", &y);
    wynik = potega(x, y);

    printf("wynik %lld \n", wynik);
    return 0;
}


