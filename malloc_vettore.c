#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v;
    int *pdim;
    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", pdim);

    v  = (int*)malloc(*pdim * (sizeof(int)));

    for(int *p = v; p < v + *pdim; p++){
        printf("Inserisci un numero intero: ");
        scanf("%d", p);
    }

    free(v);

    return 0;
}