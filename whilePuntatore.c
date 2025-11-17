#include <stdio.h>
#define DIM 5

int main(){
    int v[DIM] = {10, -2, 3, 6, 1};
    int *p = v;

    while(p < v + DIM) {
        printf("Indirizzo: %d\n", p);
        printf("Valore: %d\n", *p);
        printf("Sottrazione: %d\n", p - v); // stampa l'indirizzo del puntatore

        p++;
    }
    return 0;
}