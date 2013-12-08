#include <stdio.h>
#include <math.h>

double przeciwprost(double a, double b){
double wynik;
    wynik = sqrt(a * a + b * b);
    return wynik;
}

int main(void){
    double bok1, bok2, wynik;
    printf("podaj dlugosc pierwszego boku: ");
    scanf("%lf", &bok1);
    printf("podaj dlugosc drugego boku: ");
    scanf("%lf", &bok2);
    wynik = przeciwprost(bok1, bok2);
    printf("dlugosc przeciwprostokatnej: %lf \n", wynik);
return 0;
}
/*Dodaj -lm do kompilacji */