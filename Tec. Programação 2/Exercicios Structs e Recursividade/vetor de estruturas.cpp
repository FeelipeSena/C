#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5
struct aluno {
	int mat;
	char nome[81];
	char end[81];
	char tel[21];
};

typedef struct aluno *PAluno;
PAluno tab[MAX];
void inicializa(void);
void preenche(int i);
void remove(int i);
void imprime(int i);
void imprime_tudo(void);

int main(void)
{
   int opcao=0, n;
   aluno x;
   
   while (opcao != 9)
   {
      //clrscr();
      printf("\nMenu - Tabela de Alunos\n");
      printf("\n 1 - Inicializacao");
      printf("\n 2 - Cadastramento");
      printf("\n 3 - Remocao");
      printf("\n 4 - Consulta um Elemento da tabela");
      printf("\n 5 - Consulta todos elementos da tabela");
      printf("\n 9 - Fim");
      printf("\n Digite a opcao: ");
      scanf ("%d", &opcao);
      switch (opcao)
      {
	 case (1) :  inicializa();
	  	     printf("\nTabela Inicializada");
	  	     getch();
	  	     break;
	 case (2) :  printf("\nDigite o numero da Matricula a Incluir/Alterar: ");
		     scanf("%d", &n);
                     if (n > MAX)
                         continue;
                     preenche(n);
                     printf("\nDados Cadastrados");
                     getch();
		     break;
         case (3) :  printf("\nDigite o numero da Matricula a Remover: ");
                        scanf("%d", &n);
		     remove(n);
		     printf("\nDados Removidos");
		     getch();
		     break;
         case (4) :  printf("\nDigite o numero da Matricula a Consultar: ");
		     scanf("%d", &n);
		     imprime(n);
		     getch();
		     break;
         case (5) :  imprime_tudo();
		     getch();
		     break;
	}
   }
        for(n=0;n<=MAX;n++)
                free(tab[n]);
	printf("\nFim do programa");
	getch();
}

void inicializa(void)
{
   int i;
   for (i=0; i<MAX; i++) tab[i] = NULL;
}

void preenche(int i)
{
    if (tab[i] == NULL)
    	tab[i] = (PAluno) malloc(sizeof(struct aluno));
    tab[i]->mat = i;
    printf("\nEntre com o nome: ");
    scanf(" %80[^\n]", tab[i]->nome);
    printf("\nEntre com o endereco: ");
    scanf(" %120[^\n]", tab[i]->end);
    printf("\nEntre com o telefone: ");
    scanf(" %20[^\n]", tab[i]->tel);
}

void remove(int i)
{
   if (tab[i] != NULL)
   {
        free(tab[i]);
	tab[i] = NULL;
   }
}

void imprime(int i)
{
   if (tab[i] != NULL)
   {
      printf("\nMatricula: %03d\n", tab[i]->mat);
      printf("Nome     : %s\n", tab[i]->nome);
      printf("Endereco : %s\n", tab[i]->end);
      printf("Telefone : %s\n", tab[i]->tel);
   }
}

void imprime_tudo(void)
{
   int i;
   for (i=0; i<MAX; i++)
   	imprime(i);
}
