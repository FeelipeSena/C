#include<stdio.h>
int fat(int numero);
int main() {
	int resultado, numero;
	printf("fatorial:");
	scanf("%i",&numero);
	resultado=fat(numero);
	printf("%i",resultado);
}
int fat(int n){
	if(n<2){
		return 1;
	}
	return n*fat(n -1);
}
