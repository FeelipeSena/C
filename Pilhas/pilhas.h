#include <stdio.h>
#include <stdlib.h>
 
//NÓ DA LISTA PARA ARMAZENAR VALORES
typedef struct no {
    float info;
    struct no *prox;
}No;
 
//ESTRUTURA DA PILHA
typedef struct pilha {
    No *prim;
}Pilha;
 
// PROTOTIPOS
Pilha *cria(void);
No *ins_ini (No *l, float v);
No *ret_ini (No *l);
void push (Pilha *p, float v);
float pop (Pilha *p);
int vazia (Pilha *p);
void libera (Pilha *p);
void imprime (Pilha *p);
int comprimento(Pilha *p);
 
//INICIA A LISTA COMO SENDO VAZIA
Pilha *cria(void) {
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}
 
//FUNÇÃO AUXILIAR: INSERE NO INICIO
No *ins_ini (No *l, float v){
    No *p = (No*)malloc(sizeof(No));
    p->info = v;
    p->prox = l;
    return p;
}
 
//FUNÇÃO AUXILIAR: RETIRA DO INÍCIO
No *ret_ini (No *l){
    No *p = l->prox;
    free(l);
    return p;
}
 
//FUNÇÃO COLOCA NA PILHA
void push (Pilha *p, float v){
    p->prim = ins_ini(p->prim, v);
}
 
//FUNÇÃO RETIRA DA LISTA
float pop (Pilha *p){
    float v;
    if (vazia(p)) {
        printf ("PILHA VAZIA!\n");
        exit (1);
    }
    v = p->prim->info;
    p->prim = ret_ini(p->prim);
    return v;
}
 
//A PILHA ESTARÁ VAZIA SE A LISTA ESTIVER VAZIA
int vazia (Pilha *p){
    return (p->prim == NULL);
}
 
//LIBERA TODOS OS ELEMENTOS DA LISTA E DEPOIS LIBERA A PILHA
void libera (Pilha *p) {
    No *q = p->prim;
    while (q!=NULL) {
        No *t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}
 
//IMPRIME A PILHA
void imprime (Pilha *p){
    No *q;
    for (q=p->prim; q!=NULL; q=q->prox){
        printf ("%.2f\n",q->info);
    }
}

//COMPRIMENTO DA PILHA
int comprimento (Pilha *p){
    No *q;
    int i;
    for (q=p->prim; q!=NULL; q=q->prox){
    	i = i + 1;
    }
    return i;
}

