#include <stdio.h>
#include <stdlib.h>

int soma_pts(int n1, int n2){
    int sum = 0;
    for(int i=n1; i<=n2; i++){
        sum += i;
    }
    return sum;
}

int main(void){
    int soma, n1, n2;
    scanf("%d %d", &n1, &n2);
    soma = soma_pts(n1, n2);
    printf("%d\n", soma);
    return 0;
}
