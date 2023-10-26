#include <stdio.h>
#include <stdlib.h>

int locacoesGratuita(int vetor[500], int filmesGratis[500]){

    for(int i = 0; i < 500; i++){
        filmesGratis[i] = vetor[i]/15;
    }
    
}


main () {

    int A[500];
    int filmesGratis[500];

    for( int i = 0; i < 500 ; i++){

        A[i] = rand() % 500 + 1;

    }

    locacoesGratuita(A, filmesGratis);

    for(int i = 0; i < 10; i++){
        printf("\nO cliente [%d] alugou um total de %d e pode retirar %d gratuito", i, A[i], filmesGratis[i] );
   
    }

    for( int i = 0; i < 10 ; i++){

       printf("\n%d", A[i]);

    }





}