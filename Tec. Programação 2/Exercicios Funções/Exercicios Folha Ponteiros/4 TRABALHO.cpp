#include<stdio.h>
#include<string.h>
void codificar(char *str1, char *str2);
int main (){
	char str1[51],str2[51], c;
	printf("insira a string para codificacao:");
	gets(str1);
	codificar(str1,str2);
	printf("%s",str2);
}

void codificar(char *str1, char *str2){
	char c;
	int j=strlen(str1);
	for(int i=0;str1[i]!='\0';i++){
		if (str1[i]== ' '){
			str2[i]=' ';
			}
		if((str1[i]>='a' && str1[i]<='z')||(str1[i]>='A' && str1[i]<='Z')){	
			str2[i]=(str1[i]-255);
			if(str1[i]=='z'){
				str2[i]='a';
			}
			if(str1[i]=='Z'){
				str2[i]='A';
			}
		}
	}
	str2[j]='\0';
}
