#include <stdio.h>

 main() {
    float comprimento, largura;
    //Dadas as medidas de uma sala, informe sua área.
    // Recebendo as medidas da sala
     printf("\t----------exercicio3_operadores----------\t");
    printf("\nDigite o comprimento da sala: ");
    scanf("%f", &comprimento);
    
    printf("\nDigite a largura da sala: ");
    scanf("%f", &largura);
    
    
    float area = comprimento * largura;
    printf("\nA área da sala é %.2f metros quadrados.\n", area);
    
   
}
