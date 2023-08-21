#include <stdio.h>

 main() {
    float valorEmReais, cotacaoDolar;
    //Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.
    // Recebendo o valor em reais e a cotação do dólar
     printf("\t----------exercicio4_operadores----------\t");
    printf("\nDigite o valor em reais: ");
    scanf("%f", &valorEmReais);
    
    printf("\nDigite a cotação do dólar: ");
    scanf("%f", &cotacaoDolar);
    
     printf("\t----------Resultado----------\t");
    float valorEmDolares = valorEmReais / cotacaoDolar;
    printf("\nO valor de %.2f reais e equivalente a %.2f dólares.\n", valorEmReais, valorEmDolares);
    
    
}
