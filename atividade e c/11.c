#include <stdio.h>

int main() {
    
    float alpha, x1, x2, x3;
    float s1, s2, s3;

    
    printf("Digite o coeficiente de suavizacao (alpha) (0 < alpha < 1): ");
    scanf("%f", &alpha);

    
    if (alpha <= 0 || alpha >= 1) {
        printf("O coeficiente de suavizacao deve estar entre 0 e 1.\n");
        return 1; 
    }
    
    printf("Digite o primeiro valor (x1): ");
    scanf("%f", &x1);
    printf("Digite o segundo valor (x2): ");
    scanf("%f", &x2);
    printf("Digite o terceiro valor (x3): ");
    scanf("%f", &x3);

    
    s2 = alpha * x2 + (1 - alpha) * s1;
    s3 = alpha * x3 + (1 - alpha) * s2;

    
    printf("A média ponderada exponencial do primeiro valor é: %.2f\n", s1);
    printf("A média ponderada exponencial do segundo valor é: %.2f\n", s2);
    printf("A média ponderada exponencial do terceiro valor é: %.2f\n", s3);

    return 0;
}