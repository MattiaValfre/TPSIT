#include <stdio.h>

int main(){
    int v[DIM] = {10, -2, 3, 6, 1};

    for(int *p = v; p < v + DIM; p++){
        printf("Indirizzo: %d\n", p);
        printf("Valore: %d\n", *p);
        printf("Sottrazione: %d\n", p - v);
    }
    return 0;
}