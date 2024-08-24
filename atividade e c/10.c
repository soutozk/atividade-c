#include <stdio.h>

int main() {
    // Declaração das variáveis
    float valor1, valor2, valor3;
    float peso1, peso2, peso3;
    float media_ponderada;

    // Solicita ao usuário os três valores e seus respectivos pesos
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o peso do primeiro valor: ");
    scanf("%f", &peso1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    printf("Digite o peso do segundo valor: ");
    scanf("%f", &peso2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);
    printf("Digite o peso do terceiro valor: ");
    scanf("%f", &peso3);

    // Calcula a média ponderada
    media_ponderada = (valor1 * peso1 + valor2 * peso2 + valor3 * peso3) / (peso1 + peso2 + peso3);

    // Exibe o resultado
    printf("A média ponderada é: %.2f\n", media_ponderada);

    return 0;
}