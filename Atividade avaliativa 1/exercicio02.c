#include <stdio.h>

main(){

double alt_chico = 1.50;
double alt_ze= 1.10;
int idade =0;

double crescimento_chico = 0.02;
double crescimento_ze = 0.03;

while ( alt_ze <= alt_chico) {

    alt_chico += crescimento_chico;
    alt_ze += crescimento_ze;
    idade ++ ;

}

printf("\n ----- Resultado -----\n");

printf("\n E necessario %d anos para que ze tenha a idade maior que chico.\n", idade);


}