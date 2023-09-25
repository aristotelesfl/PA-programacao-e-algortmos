#include <stdio.h>

int main()
{
    int matriz[3][3] = {{55, 18, 26}, {101, 37, 97}, {32, 14, 26}}, value, sum=0;

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    scanf("%d", &value);
    for (int j=0; j<3; j++){
        sum += matriz[value][j];
    }
    printf("%d", sum);
    return 0;
}
