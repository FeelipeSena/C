#include<stdio.h>
#include<string.h>
int inverte(char *n, int tam, int posicao){
	if (posicao < tam/2){
		if (n[posicao] == n[tam-posicao-1]){
			return 1 *inverte(n,tam, posicao+1);
		}
		else {
			return 0;
		}
	}
	else{
		return 1;
	}
}

int palindromo(char *n){
	
	int aux1, x=0;
	aux1 = inverte(n, strlen(n), x);
	if (aux1 == 1) printf("Eh palindromo");
	else printf("Nao eh palindromo");
	
}
int main(){
	char palavra[30];
	printf("insira a palavra para verificacao de palindromo:");
	gets(&palavra[0]);
	palindromo(palavra);
	return 0;	
}

