/* Função para contar a quantidade de caracteres de uma string*/
#include<stdio.h>
#include <stdlib.h>
int tamanho(char *pMsg);
void imprimir(char *pMsg);
void concatenar(char *origem, char *destino);
int main (){
	char string[100];
	char string2[100];
	char *pMsg=string;
	char *origem=string;
	char *destino=string2;
	printf("------------------------------------------------------\n");
	printf("Digite a primeira sua string: ");
	printf("\n------------------------------------------------------\n");
	gets(string);
	system("cls");
	tamanho(string);
	imprimir(string);
	printf("------------------------------------------------------\n");
	printf("Digite a sua segunda string: ");
	printf("\n------------------------------------------------------\n");
	gets(string2);
	system("cls");
	concatenar(string,string2);
	printf("Felipe Sena 23 out. 2018");
}
void concatenar(char *origem, char *destino){
	printf("/////Funcao para Concatenar a primeira com a segunda String /////\n");
	while(*origem!='\0'){
		printf("%c",*origem);
		*origem++;
	}
	if(*origem=='\0'){
		printf(" ");
		while(*destino!='\0'){
			printf("%c",*destino);
			*destino++;
		}
	}
	printf("\n");
	system("pause");
	system("CLS");
}
int tamanho (char *pMsg){
	printf("/////Funcao para verificar o tamanho da primeira String /////\n");
	int n=0;
	while (*pMsg!='\0'){
		pMsg++;
		n++;
	}
	printf("O tamanho da Primeira String e de [%i] Caracteres.\n",n);
	system("pause");
	system("CLS");
}
void imprimir(char *pMsg){
	printf("/////Funcao Imprimir caractere por caractere da primeira string /////\n");
	while (*pMsg != '\0'){
		printf("%c\n",*pMsg);
		pMsg++;
	}
	system("pause");
	system("CLS");
}
	

