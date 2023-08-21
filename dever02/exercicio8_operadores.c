#include <stdio.h>

 main() {
    float salarioAtual, percentualReajuste;
     printf("\t----------exercicio8_operadores----------\t");
    //Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.
    printf("\nDigite o salario atual: ");
    scanf("%f", &salarioAtual);
    
    printf("\nDigite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);
    
    printf("\t----------Resultado----------\t");
    float novoSalario = salarioAtual * (1 + percentualReajuste / 100);
    
   
    printf("\nO novo salário e %.2f\n", novoSalario);
    
    
}
