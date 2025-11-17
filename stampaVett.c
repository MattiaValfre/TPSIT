#include <stdio.h>
#define LUNG 5

int main(){
    int vet[LUNG];
    int *p;
    int max = 0;

    for (p = vet; p < vet + LUNG; p++){
        printf("Inserisci un numero intero: ");
        scanf("%d", p);
        if (max <= *p) max = *p;
    }
    printf("Il numero piu grande e': %d", max);
}