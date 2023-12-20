#include <stdio.h>
#include <stdlib.h>

int chk_primo(int num){
    int divisores=0, i=1;
    while(divisores<=2 && i<=num){
        if(num%i==0){
            divisores++;
        }
        i++;
    }
    if(divisores==2) return num;
}

int main(void){
    int soma=0;
    for (int i=1; i<=100; i++){
        soma += chk_primo(i);
    }
    printf("%d", soma);
    return 0;
}
