#include <stdio.h>

int fatorial(int n){
    if (n==0 || n==1) return 1;
    else return n*fatorial(n-1);
}

int arranjo(int n, int p){
    int a = fatorial(n)/fatorial(n-p);
    return a;
}

int main(void){
    int n, p, A;
    scanf("%d %d", &n, &p);
    A = arranjo(n, p);
    printf("%d\n", A);
    return 0;
}
