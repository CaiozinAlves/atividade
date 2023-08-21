#include <stdio.h>

 main() {
    float numero1, numero2;

     // Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.

      //operadores aritméticos- soma (+), subtração (-)
    //divisão (/) multiplicação (*) e modulo (%)
    //atenção a ordem de precedencia


    //escrever um algoritmo que realize uma subtração de dois numeros e apresente o resultado


    //passo 1- declarar variaveis
    //passo 2- receber os dados
    //passo 3- monta a operação de processamento (calculo)
    //passo 4- apresenta saída
    
   printf("\t----------exercicio1_operadores----------\t");
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &numero1);
    
    printf("\nDigite o segundo numero: ");
    scanf("%f", &numero2);
    
    
    printf("\nSoma: %.2f\n", numero1 + numero2);
    printf("\nSubtracao: %.2f\n", numero1 - numero2);
    printf("\nMultiplicacao: %.2f\n", numero1 * numero2);
    
    if (numero2 != 0) {
        printf("\nDivisao: %.2f\n", numero1 / numero2);
    } else {
        printf("\nDiviso por zero nao e definida.\n");
    }
    
    
}
