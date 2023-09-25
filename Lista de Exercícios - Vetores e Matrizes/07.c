#include <stdio.h>

int main()
{
    float filiais[8], sum=0;
    int qtd=0;
    for (int i; i<8; i++){
        scanf("%f", &filiais[i]);
        sum+=filiais[i];
        if(filiais[i]>=0){
            qtd++;
        }
    }
    
    printf("%.2f, %d", sum, qtd);
    return 0;
}
