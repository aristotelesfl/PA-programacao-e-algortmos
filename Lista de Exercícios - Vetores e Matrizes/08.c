#include <stdio.h>

int main()
{
    int matriz[3][3], value;
    
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d", &value);
            if(value>=1) matriz[i][j]=1;
            else matriz[i][j]=-1;
        }
    }
    
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
