#include <stdio.h>

int main () {
	
	int x = 10;
	double y = 20.50;
	char z = 'a';
	
	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	double soma = *pX + *pY;
	
	printf(" Endereco de X : %i  - Valor de X : %i\n", pX, *pX);
	printf(" Endereco de Y : %i  - Valor de Y : %f\n", pY, *pY);
	printf(" Endereco de Z : %i  - Valor de Z : %c\n", pZ, *pZ);
	printf("\n\n");
	printf("Valor da Soma de X + Y pelos ponteiros : %f", soma);

}
