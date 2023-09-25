#include <stdio.h>

int main()
{
    int id[10] = {0,1,2,3,4,5,6,7,8,9};
    int input_id, verifica = 0;
    scanf("%d", &input_id);
    for (int i=0; i<10; i++){
        if (input_id==id[i]) verifica = 1;
    }
    if (verifica == 1) printf("%d", input_id);
    else printf("ID digitado não corresponde a nenhuma filial");
    return 0;
}
