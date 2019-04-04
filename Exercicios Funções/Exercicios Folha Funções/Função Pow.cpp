/* Exercicio para potenciação SEM uso da função POW e biblioteca de math */
#include<stdio.h>
#include<stdlib.h>
int power(int, int);
int main (){
	int x, n, pot;
	printf("Digite os valores para o calculo X^Y :");
	scanf("%d%d", &x, &n);
	power(x,n);
}
int power(int x, int n){
/* calcula a potencia de x */
int i, pot;
i = 0;
pot = 1;
	while (i < n){
		pot = pot * x;
		i++;
	}
printf("%i", pot);
}

