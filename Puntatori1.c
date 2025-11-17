//programma che dimostri che il puntatore e il vettore hanno lo stesso valore

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[10];
    int *pi;
    pi = vet;

    printf("%p %p", vet + 20, pi);
    printf("\n%d", *(vet + 20)); // NON SI DEVE FARE!!!!
} 