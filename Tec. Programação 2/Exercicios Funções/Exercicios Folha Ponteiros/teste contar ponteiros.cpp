#include <stdio.h>

int strlen(char *s)
{
	char *ptr=s;//s=&s[0]
	while (*s!='\0')
		s++;
	return (int) (s-ptr);
}

int main()
{
	char Nome[]="Joaquim Miguel";


	printf("O tamanho do nome: %d\n",strlen(Nome));
}
