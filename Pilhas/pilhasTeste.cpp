#include <stdio.h>
#include <stdlib.h>
#include "pilhas.h"
 
Pilha *concat(Pilha *p, Pilha *q){
    Pilha *aux = cria();
    float v;
    push (aux, v=pop(q));
    push (aux, v=pop(q));
    push (aux, v=pop(q));
    push (aux, v=pop(q));
    push (p, pop(aux));
 
    push (p, pop(aux));
 
    push (p, pop(aux));
 
    push (p, pop(aux));
    return p;
 
}
 
int main(){
    Pilha *p = cria();
    Pilha *q = cria();
    float v;
    push(p, 1);
    push(p, 2);
    push(p, 3);
    push(p, 4);
    printf("Comprimento : %i", comprimento(p));
    

    push(q, 5);
    push(q, 6);
    push(q, 7);
    push(q, 8);
 
    imprime (p);
    printf ("\n");
    imprime (q);
	
    p = concat(p, q);
 
    printf ("\n");
    imprime(p);
 
    return 0;
}
