#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

#define MAX_STR 256

// Funzione ERRORE che termina il programma se chiamata
void errore(char *s, int n) {
    printf("%s\n", s);
    printf("%d\n", errno, strerror(errno)); /*Ti dice dove è l'errore, quale è, e termina
                                            il processo restituendo n*/
    exit(n);
}
/*
LIBRERIA <errno.h> 
--> contiene un numero di errore di sistema (Una variabile globale che gestisce lui)
*/




//Funzione READLINE che legge una riga del file 
char *readLine(FILE *in) {
    //char *ret;
    char buffer[MAX_STR]; 
    int i; char c;

    for(i = 0; ((c = fgetc(in))!= '\n') && (c != EOF); i++) {  // fa questo ciclo finche
        buffer[i] = c;                                         // non trova \n o EOF                                                  
    }

    //ret = strdup(buffer);
    
    return (i == 0)? NULL : strdup(buffer);
    //--->forma contratta di:
    /* 
    if (i == 0) ret NULL;
       else ret = strdup(buffer);
       return ret;
    */
}




//Funzione RANDOMRANGE che genera un numero casuale in un range dato
int randomRange(int min, int max) {
    return rand()% (max - min + 1) + min;
}
