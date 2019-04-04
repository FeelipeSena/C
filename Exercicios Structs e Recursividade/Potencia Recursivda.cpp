#include<stdio.h>
int potenciakn(int k, int n) {
	if(n == 1) {
	return k;
	}
	return k * potenciakn(k, n - 1);
}
int main(){
	int k=5;
	int n=2;
	printf("%i",potenciakn(k,n));
}
