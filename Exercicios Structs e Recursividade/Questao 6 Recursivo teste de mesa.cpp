#include<stdio.h>
int calcular(int n);
int main (){
	int n;
	scanf("%i", &n);
	calcular(n);
}

int calcular(int n){
	if(n==0)
		return(0);
	return (n+calcular(n-1));
}
