#ifndef MYLIB_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <time.h>

#define MAX_STR 256

void errore(char* s, int n);
char *readline(FILE *f);
char **splitString(char *s, char delimiter);
void disposeStringArray(char **arr);  //solo questa non da fare
int randomRange(int min, int max);

#include "myLib.c"

#endif
