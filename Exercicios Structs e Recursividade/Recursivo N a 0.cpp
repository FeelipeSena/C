#include <stdio.h>

void imprimenumeros(int n){
    printf("%d\n", n);
    if (n==0) {
        return;
    } else {
        imprimenumeros(n-1);
    }
}

int main (){
    int n;
    int y;
    printf("digite um numero\n");
    scanf("%d", &n);
    imprimenumeros(n);
    return 0;
}
