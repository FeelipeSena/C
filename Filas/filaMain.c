#include <stdio.h>
#include"fila.h"
int main (void) {
Fila* f = cria();
insere (f,0);
insere (f,8);
insere (f,2);
insere (f,3);
printf ("Primeiro elemento: %d\n", retira(f));
printf ("Segundo elemento: %d\n", retira(f));
printf ("Configuracao da fila:\n");
imprime (f);
libera (f);
}
