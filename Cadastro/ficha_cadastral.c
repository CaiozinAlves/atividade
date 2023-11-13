#include  <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Usuaria{

    int id;
    char nome [50];
    char email[50];
    char sexo [15];
    char endereco[100];
    double altura ;
    int vacina;

};

int gerarId () {

    return rand () %1000 + 1;

}

void incluirUsuario (struct Usuario usuarios [], int * contador){
    if (*contador < 100 ){
        struct Usuario novoUsuario;
        novoUsuario.id = gerarId;
    }

    printf("Nome completo");
    scanf("%[^\n]s", novoUsuario.nome);
}