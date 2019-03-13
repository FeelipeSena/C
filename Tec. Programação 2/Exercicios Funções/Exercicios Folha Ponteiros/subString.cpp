#include<stdio.h>
#include<string.h>
char *subString(char *str, int inicio, int fim);
int main (){
	int ini, fim,tam;
	char string[50],*ptr,*novaString;
	fflush(stdin);
	printf("Insira a String:");
	gets(&string[0]);
	printf("Insira a posição de corte da string , inicio:");
	scanf("%i",&ini);
	printf("fim:");
	scanf("%i",&fim);
	ptr=&string[0];
	subString(ptr,ini,fim);
}
char *subString(char *str, int inicio, int fim) {
	int n=0;
	char subString[50];
	if(fim<inicio){
		printf("inicio ou fim invalidos");
		return 0;
	}else if(fim> strlen(str)){
		printf("fim maior que a string");
		return 0;
	}
	while(inicio<=fim){
		subString[n]=str[inicio-1];
		inicio++;
		n++;
	}
	subString[n-1]=='\0';
	puts(subString);
	return subString;
}

