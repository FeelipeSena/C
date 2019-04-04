#include<stdio.h>
int main (){
	int fibo(int n);
	int numero, result;
	printf("N-esimo termo fibonacci:");
	scanf("%i", &numero);
	result = fibo(numero);
	printf("%i", result);
	return 0;
}
int fibo(int n){
	if (n <2) return 1;
	return fibo(n-1) + fibo(n-2);
}
