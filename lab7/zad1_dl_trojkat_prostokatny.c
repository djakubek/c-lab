/*Funkcja przeciwprostokatna obliczającą 
długość przeciwprostokątnej trójkąta prostokątnego
 z podanych długości przyprostokątnych. 
 Wykorzystaj tę funkcję w programie do 
 określania długości przeciwprostokątnej 
 każdego z następujących trójkątów:

trójkąt  bok 1  bok2
--------------------
1        3.0    4.0
2        5.0    5.0
3        1.0    6.0 
Funkcja powinna pobierać dwa argumenty 
typu double i zwracać długość przeciwprostokątnej 
też jako double */

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