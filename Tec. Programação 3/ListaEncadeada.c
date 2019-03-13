#include <stdio.h>
#include <stdlib.h>
struct lista {
	int info;
	struct lista*prox;
};
typedef struct lista Lista;
Lista* insere (Lista* l, int);
Lista* inicializa (void);
void imprime (Lista* l);

int main (void){
	Lista* l; /* declara uma lista não inicializada */
	l = inicializa(); /* inicializa lista como vazia */
	l = insere(l, 23); /* insere na lista o elemento 23 */
	l = insere(l, 45); /* insere na lista o elemento 45 */
	imprime(l);

	return 0;
}


/* inserção no início: retorna a lista atualizada */
Lista* insere (Lista* l, int i){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}

/* função de inicialização: retorna uma lista vazia */
Lista* inicializa (void){
	return NULL;
}

/* função imprime: imprime valores dos elementos */
void imprime (Lista* l){
	Lista* p; /* variável auxiliar para percorrer a lista */
	for (p = l; p != NULL; p = p->prox)
	printf("info = %d\n", p->info);
}
