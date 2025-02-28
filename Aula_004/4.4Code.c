#include <stdio.h>

int main(void){

    int primvalor;
    int segvalor;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &primvalor);

    printf("Digite o segundo valor: \n");
    scanf("%d", &psegvalor);

    if (primvalor > segvalor){
        printf("O maior número é: %d", primvalor);
    }

    if (segvalor > primvalor){
        printf("O maior número é: %d", segvalor);
    }
    
    if (primvalor == segvalor){
        printf("Os valores são iguais!!");
    }

    return 0;
}