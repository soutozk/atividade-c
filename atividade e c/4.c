#include <stdio.h>
#include <string.h>

int main() {
    char original[100];  
    char copia[100];     

    
    printf("Digite uma string: ");
    fgets(original, sizeof(original), stdin);

   
    strcpy(copia, original);

    
    printf("A string copiada é: %s", copia);

    return 0;
}