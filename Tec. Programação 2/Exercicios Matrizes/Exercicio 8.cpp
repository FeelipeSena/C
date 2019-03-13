/*  EXERCICIO 2 e 3 */
#include <stdio.h>
#include <stdlib.h>
int main (){
	int mat[5] [5];
	int i=0, j=0;
		for(i=0;i<5;i++){
				for(j=0;j<5;j++){
					printf("Digite valor da posicao %d %d:", i+1, j+1);
					scanf("%d", &mat[i][j]);
				}
			}
	puts("Matriz\n");
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				printf("%02d", mat[i][j]);
			}
			printf("\n");
		}
	puts("Diagonal Principal : Se o numero da linha for igual ao numero da coluna");
	
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				
					if (i==j){
						printf("%02d", mat[i][j]);}
					else 
						printf(" ");	
			}
			printf("\n");	
		}	
}

