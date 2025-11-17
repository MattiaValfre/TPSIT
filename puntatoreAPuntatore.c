#include <stdio.h>
#include <stdlib.h>
#define DIM1 5
#define DIM2 8

int main(){
    int **a, i, j;

    a = (int **)malloc(DIM1, sizeof(int *));
    
    for(i = 0; i < DIM1; i++){
        a[i] = (int *)malloc(DIM2, sizeof(int));
        
        a[i][j] = i * j;
        j++;
        printf("%d", a[i][j]);
    }

    
}