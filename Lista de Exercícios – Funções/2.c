#include <stdio.h>
#include <stdlib.h>

float pesoIdeal(float altura, int sexo){
    float peso_ideal;
    switch (sexo){
        case 1:
        peso_ideal = (72.7*altura)-58;
        return peso_ideal;
        
        case 2:
        peso_ideal = (62.1*altura)-44.7;
        return peso_ideal;
        
        default:
        printf("Sexo inválido\n");
        exit(0);
    }
}

int main(void){
    float peso_ideal, altura;
    int sexo;
    scanf("%f %d", &altura, &sexo);
    peso_ideal = pesoIdeal(altura, sexo);
    printf("%.2f", peso_ideal);
    return 0;
}
