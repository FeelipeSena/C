#include<stdio.h>
#include<stdlib.h>
void inverter (char *str1, char *str2);

int main (){
	char string[100]; char string2[100];
	printf("Digite uma frase:");
	gets(string);
	inverter(string,string2);	
}
void inverter(char*str1,char*str2){
	int i, t, j;
	for(i=0;str1[i]!='\0';i++){
		t++;
	}
	for(i=t;i>0;i--){
		str2[j]=str1[i-1];
		j++;
	}
	for(i=0; i<t;i++){
		printf("%c",str2[i]);
	}
}
