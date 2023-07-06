/*106- Escrever um programa que
(a) leia um conjunto de 10 notas, armazenando-as em vetor
(b) calcule e imprima a sua média,
(c) calcule e imprima o número de alunos com nota superior à média*/

#include <stdio.h>

int main() {
    const int tamanho = 10;
    float notas[tamanho];
    float soma = 0.0;
    float media;
    int contador = 0;

    // Leitura das notas
    printf("Digite as 10 notas:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Cálculo da média
    media = soma / tamanho;

    // Contagem de notas superiores à média
    for (int i = 0; i < tamanho; i++) {
        if (notas[i] > media) {
            contador++;
        }
    }

    // Impressão da média e número de notas superiores à média
    printf("Média: %.2f\n", media);
    printf("Número de alunos com nota superior à média: %d\n", contador);

    return 0;
}
