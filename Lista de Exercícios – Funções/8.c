#include <stdio.h>

int fatorial(int n){
    if (n==0 || n==1) return 1;
    else return n*fatorial(n-1);
}

int combinacao(int n, int p){
    int c = fatorial(n)/(fatorial(p)*fatorial(n-p));
    return c;
}

int main(void){
    int n, p, C;
    scanf("%d %d", &n, &p);
    C = combinacao(n, p);
    printf("%d\n", C);
    return 0;
}
