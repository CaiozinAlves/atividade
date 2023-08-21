#include <stdio.h>

 main() {
    float custoFabrica, percentualDistribuidor, percentualImpostos;
    
     printf("\t----------exercicio9_operadores----------\t");
     
    percentualDistribuidor = 0.28;
    percentualImpostos = 0.45;
    
    
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);
    
    
    float custoDistribuidor = custoFabrica * percentualDistribuidor;
    float custoImpostos = custoFabrica * percentualImpostos;
    float custoConsumidor = custoFabrica + custoDistribuidor + custoImpostos;
    
    
    printf("O custo final ao consumidor e %.2f\n", custoConsumidor);
    
    
}
