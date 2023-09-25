#include <stdio.h>

int main()
{
    float filiais[10];
    int qtd=0, qtd_prejuizo=0;
    for (int i; i<10; i++){
        scanf("%f", &filiais[i]);
        if(filiais[i]>=0) qtd++;
        else qtd_prejuizo++;
    }
    printf("%d", qtd_prejuizo);
    return 0;
}
