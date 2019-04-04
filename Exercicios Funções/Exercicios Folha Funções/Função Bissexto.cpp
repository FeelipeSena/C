#include<stdio.h>
int anoB(int ano);
int main (){
	int ano;
	printf("Insira o ano para verificacao : //caso seja bissexto resultado 1, caso negativo 0 \n");
	scanf("%d", &ano);
	ano = anoB(ano);
	printf ("%d", ano);
}
int anoB(int ano){
	if (ano%400==0){
		ano = 1;
	}
	if (ano%4 == 0&&ano%100 != 0){
		ano = 1;
	}
	else {
		ano = 0;
	}
	return ano;
}

