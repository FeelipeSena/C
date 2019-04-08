#include <stdio.h>
#include <stdlib.h>
struct no{
int info;
struct no* prox;
};
typedef struct no No;

struct fila{
No* ini;
No* fim;
};
typedef struct fila Fila;

Fila* cria(void);
void insere (Fila* f, int v);
float retira (Fila* f);
int vazia (Fila* f);
void libera (Fila* f);
No* ins_fim (No* fim, int v);
No* ret_ini (No* ini);

Fila* cria (void)
{
Fila* f = (Fila*) malloc(sizeof(Fila));
f->ini = f->fim = NULL;
return f;
}

int vazia (Fila* f)
{
return (f->ini == NULL);
}

void libera (Fila* f) {
No* q = f->ini;
while (q!=NULL) {
No* t = q->prox;
free(q);
q = t;
}
free(f); 
}

void imprime (Fila* f)
{
No* q;
puts(" ");
for (q=f->ini; q!=NULL; q=q->prox)
printf("%03d\t", q->info);
}

void insere (Fila* f, int v)
{
f->fim = ins_fim(f->fim,v);
if (f->ini == NULL) // fila antes vazia?
f->ini = f->fim;
}

/* função auxiliar: insere no fim */
No* ins_fim (No* fim, int v) {
No* p = (No*) malloc(sizeof(No));
p->info = v;
p->prox = NULL;
if (fim != NULL) // verifica se a lista não estava vazia
fim->prox = p;
return p;
}

float retira (Fila* f) {
int v;
if (vazia(f)) {
printf("Fila vazia.\n");
exit(1); /* aborta programa */
}
v = f->ini->info;
f->ini = ret_ini(f->ini);
if (f->ini == NULL) // fila ficou vazia?
f->fim = NULL;
return v;
}

/* função auxiliar: retira do início */
No* ret_ini (No* ini)
{
No* p = ini->prox;
free(ini);
return p;
}
