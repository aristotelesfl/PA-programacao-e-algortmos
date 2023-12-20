#include <stdio.h>
#include <stdlib.h>

void chk_primo(int num){
    int divisores=0, i=1;
    while(divisores<=2 && i<=num){
        if(num%i==0){
            divisores++;
        }
        i++;
    }
    if(divisores==2) printf("%d - Sim\n", num);
    else printf("%d - Não\n", num);
}

int main(void){
    for (int i=1; i<=100; i++){
        chk_primo(i);
    }
    return 0;
}
