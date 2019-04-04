#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int mmc(int a, int b);
int main (){
	int a, b,resp;
	printf("insira os dois numeros :");
	scanf("%d %d", &a, &b);
	resp=mmc(a,b);
	printf("mmc: %i", resp);
}
int mmc(int a, int b){
	for (int i=1; i<=(a*b); i++){
		if(i%a==0 && i%b==0){
			return i;
		}
	}
}

