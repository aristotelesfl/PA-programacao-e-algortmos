#include <stdio.h>

int* buble_sort(int lista[], int size){
    int aux;
    int ordenado;
    do{
        ordenado = 0;
        for (int i=0; i<size-1; i++){
            if (lista[i]>lista[i+1]){
                aux = lista[i];
                lista[i] = lista[i+1];
                lista[i+1] = aux;
                ordenado = 1;
            }
        }
    }while(ordenado!=0);
    return lista;
}

int main(void){
    int lista[] = {8, 5, 10, 4, 6, 2};
    int size = sizeof(lista)/sizeof(int);
    int *lista_ordenada = buble_sort(lista, size);
    for (int i=0; i<size; i++){
        printf("%d ", lista_ordenada[i]);
    }
    printf("\n");
    return 0;
}
