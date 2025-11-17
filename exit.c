// funzione che termina il processo se chiamata e ci dice l'errore fatto

#include <string.h>
#include <errno.h>

void errore(char*s, int n){
  printf("%s\n", s);
  printf("%d: %s\n", errno, strerror(errno));
  exit(n);
  }

  //libreria: <errno.h> -----> contiene un numero di errore di sistema
