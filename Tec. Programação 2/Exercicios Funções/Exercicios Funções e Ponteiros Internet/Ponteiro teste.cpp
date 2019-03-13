#include<stdio.h>
#include<stdlib.h>

int main () {
	int x;
	x=10;
	int *ponteiro;
	ponteiro = &x;
	
	printf("%i\n", *ponteiro);  // ACESSA O VALOR DA VARIAVEL ONDE ESTÁ "APONTANDO" COM O *.
	printf("%i\n", ponteiro);  // ACESSA O VALOR DO PONTEIRO DA VÁRIAVEL X PELA DECLARAÇÃO DA LINHA "9" SEM O *.
	
	getchar();
}
