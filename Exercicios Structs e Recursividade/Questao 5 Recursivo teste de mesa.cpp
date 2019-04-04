#include<stdio.h>
int calcular(int n);
int main (){
	int x;
	scanf("%i",&x);
	calcular(x);
}
int calcular(int n){
	if(n==0){
		printf("fim");
	}else{
		calcular(n-1);
		printf("%i",n);
		calcular(n-1);
	}
}
