#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
       double a, b, c;
       double delta;
       
       printf("digite o valor de a:");
       scanf("%lf", &a);
       printf("digite o valor de b:");
       scanf("%lf", &b);
       printf("digite o valor de c:");
       scanf("%lf", &c);
       
       delta = (b * b) - (4 * a * c);
       
       printf("O valor de delta é %.2lf\n ", delta);
       
       return 0;
       
}