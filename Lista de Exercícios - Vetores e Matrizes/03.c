#include <stdio.h>

int main()
{
    float filiais[20], sum=0, media;
    int index_lucros[20], qtd=0;
    for (int i=0; i<20; i++){
        scanf("%f", &filiais[i]);
        if(filiais[i]>=0){
            index_lucros[qtd] = i;
            sum+=filiais[i];
            qtd++;
        }
    }
    
    media = sum/qtd;
    
    printf("(a) ");
    for (int i; i<qtd; i++){
        printf("%d ", index_lucros[i]);
    }
    
    printf("(b) %.2f", media);
    return 0;
}
