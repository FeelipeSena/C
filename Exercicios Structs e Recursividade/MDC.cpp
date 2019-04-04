#include<stdio.h>
int mdc(int a, int b){
	int r=0, x=1;
	while(x<=a){
		if((a%x==0)&&(b%x==0)){
			r=x;
			x++;
		}
	x++;
 }
	printf("%i",r);
}
int main(){
	int val1, val2;
	scanf("%d%d",&val1, &val2);
	printf("%i", mdc(val1,val2));
}
