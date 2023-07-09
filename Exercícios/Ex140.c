/*140- Faça um programa que leia os nomes de 5 alunos. Além disso, leia uma matriz de 5 linhas e 4 colunas contendo as 
seguintes informações sobre cada aluno, sendo todas as informações do tipo inteiro:
Primeira coluna: número de matrícula (use um inteiro)
Segunda coluna: média das provas
Terceira coluna: média dos trabalhos
Quarta coluna: nota final

Elabore um programa que:
Leia os nomes de cada aluno
Leia as três primeiras informações de cada aluno
Calcule a nota final como sendo a soma da média das provas e da média dos trabalhos
Imprima o nome, a matrícula e a nota final do aluno que obteve a maior nota final (assuma que só existe uma maior nota)
Imprima a média aritmética das notas finais*/

#include <stdio.h>

#define ALUNOS 5
#define COLUNAS 4

int main() {
    char nomes[ALUNOS][50];
    int informacoes[ALUNOS][COLUNAS];
    float notasFinais[ALUNOS];
    float mediaNotasFinais = 0.0;
    int indiceMaiorNotaFinal = 0;

    // Leitura dos nomes e informações dos alunos
    for (int i = 0; i < ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite o número de matrícula do aluno %d: ", i + 1);
        scanf("%d", &informacoes[i][0]);

        printf("Digite a média das provas do aluno %d: ", i + 1);
        scanf("%d", &informacoes[i][1]);

        printf("Digite a média dos trabalhos do aluno %d: ", i + 1);
        scanf("%d", &informacoes[i][2]);

        // Cálculo da nota final
        notasFinais[i] = informacoes[i][1] + informacoes[i][2];

        // Verificar se a nota final é maior que a maior nota encontrada até o momento
        if (notasFinais[i] > notasFinais[indiceMaiorNotaFinal]) {
            indiceMaiorNotaFinal = i;
        }

        // Somar as notas finais para o cálculo da média
        mediaNotasFinais += notasFinais[i];
    }

    // Cálculo da média das notas finais
    mediaNotasFinais /= ALUNOS;

    // Impressão dos resultados
    printf("\nAluno com maior nota final:\n");
    printf("Nome: %s\n", nomes[indiceMaiorNotaFinal]);
    printf("Matrícula: %d\n", informacoes[indiceMaiorNotaFinal][0]);
    printf("Nota Final: %.2f\n\n", notasFinais[indiceMaiorNotaFinal]);

    printf("Média das notas finais: %.2f\n", mediaNotasFinais);

    return 0;
}
