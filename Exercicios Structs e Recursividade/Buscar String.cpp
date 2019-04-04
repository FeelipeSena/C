#include<stdio.h>
#include<string.h>
int buscarSubString(char *str1, char *str2);
int tamanho (char *pMsg);
int main (){
	char string[100], string2[100];
	printf("------------------------------------------------------\n");
	printf("Digite a primeira sua string: ");
	gets(string);
	printf("Digite a sua busca na string: ");
	gets(string2);
	printf("\n------------------------------------------------------\n");
	buscarSubString(string, string2);
}

int buscarSubString(char *str1, char *str2){
	int vezes,repetiu, tam1, tam2,i=1;
	tam1=tamanho(str1);
	tam2=tamanho(str2);
	while (i<=tam1){
		while(*str1==*str2){
			vezes++;
			*str1++;
			*str2++;
			if (vezes==tam2){
				repetiu++;
			}
		}
		i++;
		*str1++;
	}
	if(repetiu>0) printf("Encontrado Conteudo Presente na String");
	else printf("Conteudo nao esta presente");
}

int tamanho (char *pMsg){
	int n=0;
	while (*pMsg!='\0'){
		pMsg++;
		n++;
	}
	return n;
}


