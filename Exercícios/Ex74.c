/*74- Um professor possui 5 turmas e cada turma possui 5 alunos. Construa um algoritmo que leia uma nota de cada aluno de cada uma das tumas e 
exiba a média das notas por turma*/

#include <stdio.h>

int main() {
    int turma, aluno;
    float notas, soma;

    for (turma = 1; turma <= 5; turma++) {
        soma = 0; // Reiniciar a soma para cada turma

        printf("\nTURMA %d:\n", turma);
        for (aluno = 1; aluno <= 5; aluno++) {
            printf("Digite a nota do aluno %d: ", aluno);
            scanf("%f", &notas);
            soma += notas;
        }

        printf("Média da turma %d: %.2f\n", turma, soma / 5);
    }

    return 0;
}
