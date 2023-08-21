#include <stdio.h>

 main() {
    float numero;
    //escreva um programa que receba um número qualquer e mostre o seu dobro
    printf("\t----------exercicio2_operadores----------\t");
   
    printf("\nDigite um numero: ");
    scanf("%f", &numero);
    
 printf("\t----------Resultado----------\t");
    float dobro = numero * 2;
    printf("\nO dobro de %.2f é %.2f\n", numero, dobro);
    
    
}
