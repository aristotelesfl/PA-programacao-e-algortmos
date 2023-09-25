#include <stdio.h>

int main()
{
    char entrevistados[7][10];
    for (int i=0; i<7; i++){
        scanf("%s", entrevistados[i]);
    }
    for (int i=7; i>=0; i--){
        printf("%s ", entrevistados[i]);
    }
    return 0;
}
