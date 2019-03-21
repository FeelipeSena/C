#include <stdio.h>
#include <stdlib.h>
struct lista {
	int info;
	struct lista*prox;
};
typedef struct lista Lista;

/* fun��o de inicializa��o: retorna uma lista vazia */
Lista* inicializa (void){
	return NULL;
}

/* inser��o no in�cio: retorna a lista atualizada */
Lista* insere (Lista* l, int i){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}

/* fun��o comprimento: verifica o numero de n�s de uma lista */
int comprimento (Lista* l){
	int i;
	Lista* p = l;
	for(i = 0; p != NULL; i++){
		p = p->prox;
	}
	return i;
}
/* fun��o imprime: imprime valores dos elementos */
void imprime (Lista* l){
	Lista* p; /* vari�vel auxiliar para percorrer a lista */
	for (p = l; p != NULL; p = p->prox)
	printf("info = %d\n", p->info);
}

int main (void){
	Lista* l; /* declara uma lista n�o inicializada */
	l = inicializa(); /* inicializa lista como vazia */
	l = insere(l, 23); /* insere na lista o elemento 23 */
	l = insere(l, 45); /* insere na lista o elemento 45 */
	l = insere(l, 99); /* insere na lista o elemento 99 */ 
	imprime(l);
	int comp = comprimento(l);
	printf("%i",comp);

	return 0;
}
