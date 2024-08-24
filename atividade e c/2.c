#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
       float a, b;
       float soma;
       float subtraçao;
       float multiplicaçao;
       float divisao;
       
       printf("digite o primeiro valor:");
       scanf("%f", &a);
       printf("digite o segundo valor:");
       scanf("%f", &b);

       
       soma = a + b;
       subtraçao = a - b;
       multiplicaçao = a * b;
       divisao = a / b ;
       
       printf("O resultado da soma é %.6f\n ", soma);
       printf("O resultado da subtraçao é %.6f\n ", subtraçao);
        printf("O resultado da multiplicaçao é %.6f\n ", multiplicaçao);
       printf("O resultado da divisao é %.6f\n ", divisao);
       
       return 0;
       
}