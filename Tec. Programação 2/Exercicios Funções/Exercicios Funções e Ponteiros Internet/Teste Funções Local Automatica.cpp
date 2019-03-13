#include <stdio.h>

int main (){
	
	void teste(void);
	
	teste();
	teste();
	teste();
	
	return 0;
}

void teste(void){
	
	int variavel = 2;
	variavel *= 2;
	
	printf("%i\n", variavel);
	
	
}
