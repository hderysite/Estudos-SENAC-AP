#include <stdio.h>

int main(void) {

      float Celcius;
      printf("Digite o grau que quer converter:\n");
      scanf("%f", &Celcius);
    
      float grauFahrenheit = (Celcius * 9/5) + 32;
      printf("O valor em Fahrenheit é: %.2f\n", grauFahrenheit)

  return 0;
}