/*Exercicio 8, função para imprimir numeros primos de 1 á N (maximo 1000)*/
#include<stdio.h>

int Func_primos(int);
int main () {
	int n;
	printf("Insira o valor para delimitar o calculos de Numeros primos :");
	scanf("%i",&n);
	Func_primos(n);
}
int Func_primos(int n){
	int cont1, cont2, div=0;
	for(cont2=1; cont2<=n; cont2++, div = 0){
    for(cont1=1; cont1<=n; cont1++){
      if (cont2%cont1==0){
		div++;
      }
    }
    //Só é primo se existir 2 divisores, o 1 e ele mesmo.
    if(div==2)
      printf ("%i eh primo\n",cont2);
    else
      printf ("%i nao eh primo\n",cont2);
  }
}
