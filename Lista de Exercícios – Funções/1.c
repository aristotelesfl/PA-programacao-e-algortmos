#include <stdio.h>

int area_triangulo(float base, float altura){
    float area;
    area = (base*altura)/2;
    return area;
}

int main(void){
    float base, altura, area;
    scanf("%f %f", &base, &altura);
    area = area_triangulo(base, altura);
    printf("%.2f", area);
    return 0;
}
