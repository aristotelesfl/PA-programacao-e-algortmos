#include <stdio.h>

int potencia(int x, int y){
    if (y==0) return 1;
    else return x*potencia(x, y-1);
}

int main(void){
    int x, y;
    scanf("%d %d", &x, &y);
    x = potencia(x, y);
    printf("%d\n", x);
    return 0;
}
