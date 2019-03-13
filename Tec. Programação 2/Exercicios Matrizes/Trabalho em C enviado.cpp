#include<stdio.h>	
#include<stdlib.h>

int main () {
	
	int mat[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	int i=0, j=0, N=5;
					//RESULTADO ESPERADO : SEM DIAGONAL pRINCIPAL
			printf("Matriz Exibida Sem a Diagonal Principal");
			printf("\n");printf("\n");		
				for(i=0;i<5;i++){
					for(j=0;j<5;j++){
						if (i==j){
							printf(" ");}
							else{
							printf("%02d ", mat[i][j]);
							}		
					}
		printf("\n");	
		}
					//RESULTADO ESPERADO : SEM DIAGONAL SECUNDÁRIA
			printf("\n");printf("\n");printf("\n");
			printf("Sem Diagonal Secundaria :\n");
				for(i=0;i<5;i++){
					for(j=0;j<5;j++){
						if ((i+j)==(N-1)){
							printf(" ");}
						else{
							printf("%02d ", mat[i][j]);
						}			
					}
				printf("\n");
				}
					//RESULTADO ESPERADO : SEM DIAGONAIS
						printf("\n");printf("\n");printf("\n");
						puts("Resultado da Matriz sem as diagonais segundaria e principal :");	
						
							for(i=0;i<5;i++){
							for(j=0;j<5;j++){
								if ((i+j)==(N-1)||i==j){
									printf(" ");}
									else{
									printf("%02d ", mat[i][j]);
								}		
							}
						printf("\n");	
						}
	
}
