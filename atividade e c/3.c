#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
       double base, expoente, resultado;
       
       printf("digite a base :");
       scanf("%lf", &base);
       printf("digite o expoente :");
       scanf("%lf", &expoente);

       
       resultado = pow(base, expoente);
       
       printf("O resultado é %.0lf\n", resultado);
       
       return 0;
       
}