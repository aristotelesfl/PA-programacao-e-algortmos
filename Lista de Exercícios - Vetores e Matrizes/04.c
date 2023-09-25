#include <stdio.h>

int main()
{
    float alturas[6], min=1000, max=0, aux;
    int i_min, i_max, continua=0, repeat=6;
    printf("(a)\n");
    for (int i=0; i<6; i++){
        scanf("%f", &alturas[i]);
        if(alturas[i]>=max){
            max = alturas[i];
            i_max = i;
        }
        if(alturas[i]<=min){
            min = alturas[i];
            i_min = i;
        }
    }
    printf("(b) max %.2f %d, min %.2f %d\n", max, i_max, min, i_min);
    do{
        for (int i=0; i<repeat-1; i++){
            if(alturas[i]>alturas[i+1]){
                aux = alturas[i];
                alturas[i]=alturas[i+1];
                alturas[i+1]=aux;
                continua = i;
            }
        }
        repeat--;
    }while(continua!=0);
    printf("(c) ");
    for (int i=0; i<6; i++){
        printf("%.2f ", alturas[i]);
    }
    return 0;
}
