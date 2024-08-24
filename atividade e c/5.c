#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
       char nome[200];
       float idade;
       
       printf("digite seu nome completo :");
       scanf("%s", &nome);
       printf("digite sua idade  :");
       scanf("%f", &idade);
       
       
       printf("Olá %s,seja bem-vindo ao curso de Algoritmos e Programação Estruturada. Você tem %.0f anos de idade!", nome, idade);
       
       return 0;
       
}