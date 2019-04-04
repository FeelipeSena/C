/* Criar uma função para somar, subtrair, dividir, e multiplicar dois numeros 
e retornar os valores - 03/10/18 - Felipe Sena */

#include<stdio.h>
int restoDois(int a, int b);
int somaDois(int a, int b);
int subDois(int a, int b);
int multDois(int a, int b);
float divDois(int a, int b);

int main () {
	int soma, mult, sub, resto, a, b;
	float div;
	scanf("%d%d", &a, &b);
	soma = somaDois(a,b);
	printf("soma dos inteiros : %i\n", soma);
	sub = subDois(a,b);
	printf("subtracao dos inteiros : %i\n", sub);
	mult = multDois(a,b);
	printf("multiplicacao dos inteiros : %i\n", mult);
	div = divDois(a,b);
	printf("divisao dos inteiros : %.1f\n", div);
	resto = restoDois(a,b);
	printf("resto da divisao dos inteiros : %i", resto);
}
int somaDois (int a, int b){
	int soma = a+b;
	return soma;
}
int subDois (int a, int b){
	int sub = a-b;
	return sub;
}
int multDois (int a, int b){
	int mult = a*b;
	return mult;
}
float divDois (int a, int b){
	float div = a/b;
	return div;	
}
int restoDois (int a, int b){
	int resto = a % b;
	return resto;
}
