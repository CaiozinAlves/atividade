#include <stdio.h>

 main() {
    float anos, meses, dias;
    //Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.
     printf("\t----------exercicio7_operadores----------\t");
    printf("Digite a idade em anos: ");
    scanf("%d", &anos);
    
    printf("Digite a idade em meses: ");
    scanf("%d", &meses);
    
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);
    
    printf("\t----------Resultado----------\t");
    float idadeEmDias = anos * 365 + meses * 30 + dias;
    
    
    printf("A idade e equivalente a %d dias.\n", idadeEmDias);
    
    
}
