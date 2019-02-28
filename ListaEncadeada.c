#include<stdio.h>
#include<stdlib.h>
struct lista {
	int info;
	struct lista* prox;
};
typedef struct lista Lista;
Lista* inicializa(void);
Lista* insere(Lista*, int);
Lista* remove(Lista*, int);
Lista* libera(Lista*);
void imprime(Lista*);

Lista* inicializa(void){
	return NULL;
}

Lista* insere(Lista* l, int n){
	Lista* novo=(Lista*)malloc(sizeof(Lista));
	novo->info=n;
	novo->prox=l;
	return novo;
}
void imprime(Lista* l){
	Lista* q;
	for(q=l; q!= NULL; q=q->prox){
		printf("No=%p  info=%d  prox=%p\n", q, q->info,q->prox);
	}
}
Lista* remove(Lista* l, int){
	//free(l)
}
int main(){
	Lista* l;
	l=inicializa();
	l=insere(l,10);
	l=insere(l,24);
	l=insere(l,50);
	l=insere(l,74);
	l=insere(l,99);
	l=insere(l,140);
	l=insere(l,166);
	imprime(l);
}

