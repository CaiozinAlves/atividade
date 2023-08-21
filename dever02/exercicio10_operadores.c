#include <stdio.h>

 main() {
    int numCarrosVendidos;
    float valorVendas, salarioFixo, valorPorCarro, salarioFinal;
    
     printf("\t----------exercicio10_operadores----------\t");
    
    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);
    
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorVendas);
    
    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);
    
    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valorPorCarro);
    
   
    float comissaoFixa = numCarrosVendidos * valorPorCarro;
    float comissaoVariavel = 0.05 * valorVendas;
    salarioFinal = salarioFixo + comissaoFixa + comissaoVariavel;
    
    
    printf("O salario final do vendedor e %.2f\n", salarioFinal);
    
  
}
