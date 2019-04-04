#include<stdio.h>
#include<stdlib.h>
int calc(int a, int b){
	int resto;
	if (b==0){
		return a;
	}
	resto = a%b;
	a=b;
	b=resto;
	return calc(a,b);	
}

int main (){
	int a, b;
	printf("insira os dois numeros MDC:");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d",calc(a,b));
}
