#include <stdio.h>

int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}}, b[2][3] = {{6, 5, 4}, {3, 2, 1}}, c[2][3];
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Matriz A\n");
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Matriz B\n");
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("Matriz C\n");
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
