#include <stdio.h>
#define MAX_STR 100

int main(){
    FILE *fp = fopen("testo1.csv", "r");
    if(fp == NULL) errore("fopen()", -1);
    char *line;
    while(line == readLine(fp)){
        char **fields = split(line);
        Persona p = vreaPersona(*(fields), *(fields + 1), *(fields + 1));
        free(fields);
        free(line);
    }
}

char *readLine(FILE *in){
    char buffer[MAX_STR];
    int i;
    char c;

    for(i = 0; ((c = fgetc(in)) != '\n') && (c != EOF); i++){   // fa questo ciclo finche non trova EOF
        buffer[i] = c;
    }    
    return(i == 0)? NULL: strdup(buffer);   // if i e uguale a 0 return null, else return strdup(buffer)
}