/* Escreva uma função com três números inteiros como parâmetros de entrada: dia, mês e ano. 
   Estes valores representam uma data. A função deve calcular e imprimir o dia seguinte da 
   data passada como parâmetro. No main, ler os valores do teclado e utilizar esta função. 
   Utilize a função do exercício anterior para saber se o ano é ou não bissexto
*/

// código incompleto - calcular e imprimir o dia seguinte não foi aplicado corretamente caso vire mes, vire o ano devido ao prox. dia.
#include <stdio.h>
#include <stdlib.h>
int Test_bi(int, int, int);
int Calc_data(int, int, int);
int main(){
	int dia,mes,ano;
		printf("Digite uma data no formato DD/MM/AAAA: ");
		scanf("%d%d%d",&dia,&mes,&ano);
		Calc_data(dia,mes,ano);
		Test_bi(dia,mes,ano);
}
int Calc_data(int dia, int mes, int ano){
	if (dia < 1 || dia > 31){
		puts("data invalida");
		system("pause");
		return 0;}
	else{
		if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
			if (dia >= 31){
				puts("data invalida");
				system("pause");
				return 0;
			}
    } 	
	if (mes < 1 || mes > 12){
		puts("data invalida");
		system("pause");
		return 0;
	}
	printf("Data seguinte : %d/%d/%d\n", dia+1, mes, ano);
}

int Test_bi(int dia, int mes, int ano){
	int bi=0;
	int continua;
		if (ano % 4 == 0){
		if (ano % 100)
		   bi++;
		else
			if (ano % 400 == 0)
			    bi++;
	}
	if (mes == 2){
		if (dia > 28 && bi == 0){
			puts("data invalida");
			system("pause");
			return 0;			
		}
		else 
			if (dia > 29){
				puts("data invalida");
				system("pause");
				return 0;				
			}
	}
	if(bi !=0){
		printf("O Ano eh bissexto\n");
	}
	else {
		printf("O ano nao eh bissexto\n");
	}
	return 0;
}
