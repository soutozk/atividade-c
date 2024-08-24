#include <stdio.h>

#define PI 3.14159

int main() {
    float raio, circunferencia;

    
    printf("Entre com o valor do raio: ");
    scanf("%f", &raio);

   
    circunferencia = 2 * PI * raio;


    printf("A circunferência do círculo é: %.2f\n", circunferencia);

    return 0;
}