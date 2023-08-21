#include <stdio.h>

 main() {
    float raio;
    //Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.
     printf("\t----------exercicio6_operadores----------\t");
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    
    printf("\t----------Resultado----------\t");
    float area = 3.14159 * raio * raio;
    printf("A area do circulo é %.2f\n", area);
    
    
}
