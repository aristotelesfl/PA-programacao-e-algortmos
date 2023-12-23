#include <stdio.h>

int MOD(int x, int y){
    if (x==y) return 0;
    else if (x<y) return x;
    else return MOD(x-y, y);
}

int main(void){
    int x, y, resto;
    scanf("%d %d", &x, &y);
    resto = MOD(x, y);
    printf("%d\n", resto);
    return 0;
}
