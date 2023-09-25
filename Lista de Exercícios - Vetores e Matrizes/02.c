#include <stdio.h>
#include <math.h>

int main()
{
    float notas[15], sum=0, media;
    for (int i; i<15; i++){
        scanf("%f", &notas[i]);
        sum += notas[i];
    }
    media = sum/15;
    if (media>=8){
        media = 10;
    }
    printf("%.2f\n", media);
    return 0;
}
