#include <stdio.h>

int main(void){

    int num;

    printf("Digite um número: \n");
    scanf("%d", &num);

    if (num % 10 == 0){
        printf("O número %d é múltiplo de 10", num);
    } else {
        printf("O número %d é não é múltiplo de 10", num);
    }

    return 0;
}