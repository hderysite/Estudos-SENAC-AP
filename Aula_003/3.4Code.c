#include <stdio.h>

int main() {
    printf("VolumeDoCilindro:::::::\n");

    int raio;
    int altura;

    printf("Vamos calcular o volume do cilindro\n");
    printf("Digite o valor do seu raio: ");
    scanf("%d", &raio);

    printf("Digite o valor da sua altura: ");
    scanf("%d", &altura);

    double total = 3.14 * (raio * raio) * altura;

    printf("O valor total é: %f \n", total);

    return 0;
}