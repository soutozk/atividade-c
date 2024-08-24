#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
       double litro , valor, resultado;
       
       printf("digite a quantidade de litros:");
       scanf("%lf", &litro);

       resultado =litro * 5.79;
       
       printf("O resultado é %.0lf\n", resultado);
       
       return 0;
       
}