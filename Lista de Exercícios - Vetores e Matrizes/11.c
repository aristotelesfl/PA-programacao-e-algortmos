#include <stdio.h>

int main()
{
    int cont=1, sum[5], dp[5], sum_i;
    printf("(a)\n");
    for (int i=0; i<5; i++){
        sum_i = 0;
        for (int j=0; j<5; j++){
            printf("%d ", cont);
            sum_i += cont;
            if (i==j) dp[i] = cont;
            cont++;
        }
        sum[i] = sum_i;
        printf("\n");
    }
    printf("(b) ");
    for (int i=0; i<5; i++){
        printf("%d ", sum[i]);
    }
    printf("\n");
    printf("(c) ");
    for (int i=0; i<5; i++){
        printf("%d ", dp[i]);
    }
    return 0;
}
