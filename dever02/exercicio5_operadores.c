#include <stdio.h>

 main() {
    float custoMercadoria, valorFrete, despesasEventuais, valorVenda;
    //Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.
    // Recebendo o custo da mercadoria, valor do frete e despesas eventuais
    printf("\t----------exercicio5_operadores----------\t");
   
    printf("\nDigite o custo da mercadoria: ");
    scanf("%f", &custoMercadoria);
    
    printf("\nDigite o valor do frete: ");
    scanf("%f", &valorFrete);
    
    printf("\nDigite as despesas eventuais: ");
    scanf("%f", &despesasEventuais);
    
    
    float custoTotal = custoMercadoria + valorFrete + despesasEventuais;
    
    
    printf("\nDigite o valor de venda: ");
    scanf("%f", &valorVenda);
    
   
    float lucro = valorVenda - custoTotal;
    float percentualLucro = (lucro / custoTotal) * 100;
    printf("\t----------Resultado----------\t");
   
    printf("\nO custo total da mercadoria é %.2f\n", custoTotal);
    printf("\nO lucro obtido é %.2f\n", lucro);
    printf("\nA percentagem de lucro é %.2f%%\n", percentualLucro);
    
 }
