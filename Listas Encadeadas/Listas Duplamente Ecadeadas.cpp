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

/* função de inicialização: retorna uma lista vazia */
Lista2* inicializa (void)
{
	return NULL;
}

/* inserção no início */
Lista2* insere (Lista2* l, int v)
{
        Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
	novo->info = v;
	novo->prox = l;
	novo->ant = NULL;
	/* verifica se lista não está vazia */
	if (l != NULL)
		l->ant = novo;
	return novo;
}

/* função busca: busca um elemento na lista */
Lista2* busca (Lista2* l, int v)
{
	Lista2* p;
	for (p=l; p!=NULL; p=p->prox)
		if (p->info == v)
			return p;
	return NULL;		/* não achou o elemento */
}

/* função retira: retira elemento da lista */
Lista2* retira (Lista2* l, int v) {
	Lista2* p = busca(l, v);
	if (p == NULL)
		return l; /* não achou o elemento: retorna lista inalterada*/
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
	Lista2* t = p->prox; /* guarda referência para o próximo elemento */
	free(p); /* libera a memória apontada por p */
	p = t; /* faz p apontar para o próximo */
	}
}

/* função imprime: imprime valores dos elementos */
void imprime (Lista2* l)
{
	Lista2* p; /* variável auxiliar para percorrer a lista */
	for (p = l; p != NULL; p = p->prox)
	printf("info = %d\n", p->info);
}

/* função principal */
int main (void)
{
        Lista2* l; /* declara uma lista não iniciada */
        l = inicializa(); /* inicia lista vazia */
        l = insere(l, 23); /* insere na lista o elemento 23 */
        l = insere(l, 45); /* insere na lista o elemento 45 */
        l = insere(l, 56); /* insere na lista o elemento 56 */
        l = insere(l, 78); /* insere na lista o elemento 78 */
        imprime(l); /* imprimirá: 78 56 45 23 */
        getch();
        l = retira(l, 78);
        imprime(l); /* imprimirá: 56 45 23 */
        getch();
        l = retira(l, 45);
        imprime(l); /* imprimirá: 56 23 */
        getch();
        libera(l);
        return 0;
}

