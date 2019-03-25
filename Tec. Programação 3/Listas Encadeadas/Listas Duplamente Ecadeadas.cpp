/* LISTAS DUPLAMENTE ENCADEADAS   */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct lista2 {
	int info;
	struct lista2* ant;
	struct lista2* prox;
};
typedef struct lista2 Lista2;

/* fun��o de inicializa��o: retorna uma lista vazia */
Lista2* inicializa (void)
{
	return NULL;
}

/* inser��o no in�cio */
Lista2* insere (Lista2* l, int v)
{
        Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
	novo->info = v;
	novo->prox = l;
	novo->ant = NULL;
	/* verifica se lista n�o est� vazia */
	if (l != NULL)
		l->ant = novo;
	return novo;
}

/* fun��o busca: busca um elemento na lista */
Lista2* busca (Lista2* l, int v)
{
	Lista2* p;
	for (p=l; p!=NULL; p=p->prox)
		if (p->info == v)
			return p;
	return NULL;		/* n�o achou o elemento */
}

/* fun��o retira: retira elemento da lista */
Lista2* retira (Lista2* l, int v) {
	Lista2* p = busca(l, v);
	if (p == NULL)
		return l; /* n�o achou o elemento: retorna lista inalterada*/
	/* retira elemento do encadeamento */
	if (l == p)
		l = p->prox;
	else
		p->ant->prox = p->prox;
	if (p->prox != NULL)
		p->prox->ant = p->ant;
	free (p);
	return l;
}
void libera (Lista2* l)
{
	Lista2* p = l;
	while (p != NULL) {
	Lista2* t = p->prox; /* guarda refer�ncia para o pr�ximo elemento */
	free(p); /* libera a mem�ria apontada por p */
	p = t; /* faz p apontar para o pr�ximo */
	}
}

/* fun��o imprime: imprime valores dos elementos */
void imprime (Lista2* l)
{
	Lista2* p; /* vari�vel auxiliar para percorrer a lista */
	for (p = l; p != NULL; p = p->prox)
	printf("info = %d\n", p->info);
}

/* fun��o principal */
int main (void)
{
        Lista2* l; /* declara uma lista n�o iniciada */
        l = inicializa(); /* inicia lista vazia */
        l = insere(l, 23); /* insere na lista o elemento 23 */
        l = insere(l, 45); /* insere na lista o elemento 45 */
        l = insere(l, 56); /* insere na lista o elemento 56 */
        l = insere(l, 78); /* insere na lista o elemento 78 */
        imprime(l); /* imprimir�: 78 56 45 23 */
        getch();
        l = retira(l, 78);
        imprime(l); /* imprimir�: 56 45 23 */
        getch();
        l = retira(l, 45);
        imprime(l); /* imprimir�: 56 23 */
        getch();
        libera(l);
        return 0;
}

