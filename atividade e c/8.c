#include <stdio.h>
#define valor 0.50

int main(){
float custo;
float consumo;
printf("coloque o consumo: ");
scanf("%f", &consumo);


custo = consumo * valor;
printf("Valor a pagar: R$ %.3f\n", custo);
return 0;
}