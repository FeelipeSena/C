#include<stdio.h>
#include<stdlib.h>
int main (){

	int x = 10;
	int *ponteiro;
	ponteiro = &x; //ponteiros apontando ao endereço de memoria da variavel x.
	
	int y = 20;
	*ponteiro = y; /* ( ESSE PONTEIRO APONTOU AO ENDEREÇO DE MEMORIA DE X E "FALOU QUE AQUELE VALOR VAI SER IGUAL AO VALOR DE Y"
	 O valor da variavel onde está o ponteiro (que é X) vai ser igual ao valor de Y.*/
	
	printf("%i %i \n", x, y);
	

	
	return 0;

}
