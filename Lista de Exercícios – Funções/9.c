#include <stdio.h>

int divisores(int x){
    int qtd = 0;
    for(int i=1; i<=x; i++){
        if(x%i==0){ 
            qtd++;
            printf("%d ", i);
        }
    }
    return qtd;
}

int main(void){
    int x, qtd;
    scanf("%d", &x);
    qtd = divisores(x);
    printf("\n%d\n", qtd);
    return 0;
}
