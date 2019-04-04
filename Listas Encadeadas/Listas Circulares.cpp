#include<stdio.h>
#include<stdlib.h>

struct lista{
	int valor;
	struct lista *prox;
};

typedef lista Lista;

Lista *insere(Lista *L, int n);

int imprime(Lista *L);

int main(){
	int n,op=0;
	Lista *L=NULL;
	while(op!=3){
		n=0;
		system("cls");
		printf("Programa lista encadeada circular\n\nMenu:");
		printf("\n(1)Incluir\n(2)Imprimir\n(3)Sair:\n\nOpcao:");
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("\nDigite os elementos para incluir ou -1 para sair:\n");
				while(n!=-1){
					printf("Valor: ");
					scanf("%d",&n);
					if(n!=-1) L = insere(L,n);
				}
			break;
			case 2:
				if(!imprime(L)){
					printf("Nenhum elemento para imprimir, Lista vazia!");
				}
				printf("\n\nENTER (Voltar ao menu)");
				system("pause>nul");
			break;
		}
	}
}

Lista* insere(Lista *L, int n){
	Lista *p;
	Lista *novo = (Lista*)malloc(sizeof(Lista));
	novo->valor = n;
	if(!L){
		novo->prox = novo;
		L = novo;
	}
	else{
		for(p=L;p->prox!=L;p=p->prox);
		p->prox=novo;
		novo->prox=L;
	}
	return(L);
}

int imprime(Lista *L){
	Lista *p = L;
	int n=0;
	if (!p)
		return (n);
	n=1;
	do{
		printf("\nL: %p", p);
		printf("\t\tL->prox: %p", p->prox);
		printf("\t\tValor:%d",p->valor);
		p = p->prox;
	}while(p!=L);
	return(n);
}
