#include <stdio.h>

main (){

float x, y;

printf("\n---------- Insira os valores ----------\n");

 printf(" \ncoordenadas do ponto (x y): \n ");
 scanf("%f %f", &x, &y);

 printf("\n---------- Resultado ----------\n");


 if (x == 0 && y == 0) {
        printf("\nOrigem\n");
    } else if (x == 0) {
        printf("\nEixo Y\n");
    } else if (y == 0) {
        printf("\nEixo X\n");
    } else if (x > 0 && y > 0) {
        printf("\nQ1\n");
    } else if (x < 0 && y > 0) {
        printf("\nQ2\n");
    } else if (x < 0 && y < 0) {
        printf("\nQ3\n");
    } else if (x > 0 && y < 0) {
        printf("\nQ4\n");
    }

}