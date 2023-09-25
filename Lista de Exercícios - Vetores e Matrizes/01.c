#include <stdio.h>

int main()
{
    float notas[10], sum=0, qtd=0, media;
    for (int i; i<10; i++){
        scanf("%f", &notas[i]);
        if (notas[i]>=4){
            sum+=notas[i];
            qtd++;
        }
    }
    
    media = sum/qtd;
    printf("%.2f\n", media);
    return 0;
}
