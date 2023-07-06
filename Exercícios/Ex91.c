/*91- Escreva um programa em linguagem C que leia as notas (ponto flutuante) de 5
alunos e armazene em um vetor. Em seguida, calcule e imprima a média das notas
dos alunos*/

#include <stdio.h>

int main() {
    int i;
    float notas[5], media = 0.0;

    for (i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media /= 5;

    printf("A media das notas dos alunos eh: %.2f\n", media);

    return 0;
}
