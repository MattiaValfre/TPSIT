// Programma che crea e stampa un duplicato del suo sorgente

#include <stdio.h>
#define SOURCEFILE "fileSorgente.c"    //Definizione di una costante per il file
#define DESTINATIONFILE "copia.c"

int main(int argc, char *argv[]){      // Parametri da inserire non obbligatori --> Variabili locali, argv puntatore a puntatore. argc contatore di argv

    FILE *fp;
    FILE *copia;
    char c;

    fp = fopen(SOURCEFILE, "r");
    if(fp == NULL){
        printf("Impossibile aprire il file");
        return 1;
    }

    copia = fopen(DESTINATIONFILE, "w");

    if(copia == NULL){

        printf("Impossibile copiare il file");
        return 1;
    }

    while((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    fclose(fp);

    return 0;
}
