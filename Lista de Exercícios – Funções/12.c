#include <stdio.h>

int MDC(int x, int y){
    if (x==y) return x;
    else if (x<y) return MDC(y, x);
    else return MDC(x-y, y);
}

int main(void){
    int x, y, max;
    scanf("%d %d", &x, &y);
    max = MDC(x, y);
    printf("%d\n", max);
    return 0;
}
