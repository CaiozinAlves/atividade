#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);
    
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);
    
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + 2 * nota3) / 4;
    
    printf("Média do aluno: %.2f\n", media);
    
    if (media >= 7.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
    }
    
    return 0;
}
