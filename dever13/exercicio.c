#include <stdio.h>


struct Pessoa {
    int id;
    char nome[50];
    int idade;
};


void buscarRegistro(struct Pessoa pessoas[], int tamanho, int id) {
    int encontrado = 0;
    for (int i = 0; i < tamanho; i++) {
        if (pessoas[i].id == id) {
            printf("Registro encontrado:\n");
            printf("ID: %d\nNome: %s\nIdade: %d\n", pessoas[i].id, pessoas[i].nome, pessoas[i].idade);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Registro com ID %d nao encontrado na lista de pessoas.\n", id);
    }
}

int main() {
    
    struct Pessoa pessoas[3] = {{1, "Joao", 25}, {2, "Maria", 30}, {3, "Pedro", 35}};
    int tamanho = 3;
    int id;

    
    printf("Informe o ID que deseja buscar: ");
    scanf("%d", &id);

    
    buscarRegistro(pessoas, tamanho, id);

    
}
