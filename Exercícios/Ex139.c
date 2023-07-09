/*139- Leia uma matriz 5 x10 que se refere respostas de 10 questões de múltipla escolha, referentes a 5 alunos. 
Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d. Seu programa deverá 
comparar as respostas de cada candidato com o gabarito e emitir um vetor denominado resultado, contendo a pontuação 
correspondente a cada aluno. Imprima as notas o resultado de cada aluno.
obs: cada valor vale um ponto*/

#include <stdio.h>

#define ALUNOS 5
#define QUESTOES 10

int main() {
    char respostasAlunos[ALUNOS][QUESTOES];
    char gabarito[QUESTOES];
    int resultado[ALUNOS];

    // Leitura das respostas dos alunos
    printf("Digite as respostas dos alunos:\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < QUESTOES; j++) {
            printf("Resposta da questão %d: ", j + 1);
            scanf(" %c", &respostasAlunos[i][j]);
        }
        printf("\n");
    }

    // Leitura do gabarito
    printf("Digite o gabarito:\n");
    for (int i = 0; i < QUESTOES; i++) {
        printf("Resposta da questão %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    // Comparação das respostas e cálculo das pontuações
    for (int i = 0; i < ALUNOS; i++) {
        int pontuacao = 0;
        for (int j = 0; j < QUESTOES; j++) {
            if (respostasAlunos[i][j] == gabarito[j]) {
                pontuacao++;
            }
        }
        resultado[i] = pontuacao;
    }

    // Impressão das notas
    printf("\nNotas dos alunos:\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: %d\n", i + 1, resultado[i]);
    }

    return 0;
}


