#include <stdio.h>
#include <stdlib.h>

void chk_primo(int num){
    int divisores=0;
    for (int i=1; i<=num; i++){
        if(num%i==0){
            divisores++;
        }
    }
    if(divisores==2 && num!=1) printf("%d - Sim\n", num);
    else printf("%d - Não\n", num);
}

int main(void){
    for (int i=1; i<=1000; i++){
        chk_primo(i);
    }
    return 0;
}
