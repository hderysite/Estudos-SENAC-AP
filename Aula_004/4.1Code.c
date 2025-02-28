#include <stdio.h>

int main(void){

    float num;
    printf("Digite um número inteiro: \n");
    scanf("%f", &num);
    
    if (num > 10 ){
        printf("Sim!");
    }

    return 0;
}