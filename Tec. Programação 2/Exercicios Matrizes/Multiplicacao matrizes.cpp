#include <stdlib.h>
#include <stdio.h>
int main(){
	int A[3][2] = {{2,2},{2,2},{2,2}};
	int B[2][2] = {{2,2},{2,2}};
	int C[3][2] = {0};
	int i,j,k,temp=0;
	//IMPRESSÃO DAS MATRIZES A e B
	puts("MATRIZ A");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%02d ",A[i][j]);
		}
		printf("\n");
	} 
	printf("\n\nMATRIZ B\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%02d ",B[i][j]);
		}
		printf("\n");
	} 
	// MULTIPLICAÇÃO AxB = C
	for(i=0; i<3; i++)
	{
         for(j=0; j<2; j++)
         {
                  C[i][j]=0;
                  for(k=0; k<2; k++)
                  {
                      temp += A[i][k] * B[k][j];
                  }
                  C[i][j]=temp;
                  temp=0;
         }
    }		
	printf("\n\nMATRIZ C - RESULTADO DA MULTIPLICACAO\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%02d ",C[i][j]);
		}
		printf("\n");
	} 	
	system("pause");
}
