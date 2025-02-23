#include <stdio.h>

int main(void){

    float um;
    float dois;
    float tres;

    printf("Vamos fazer a média aritmética de três números\n");

    printf ("Digite o primeiro número: ");
    scanf("%f", &um);
    printf ("Digite o segundo número: ");
    scanf("%f", &dois);
    printf ("Digite o terceiro número: ");
    scanf("%f", &tres);

    float total = (um + dois + tres) / 3;

    printf("O total da média aritmética é: %.2f", total);

    return 0;
}