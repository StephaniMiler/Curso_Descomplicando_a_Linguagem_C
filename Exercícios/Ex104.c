/*104- Faça um programa que receba do usuário valores inteiros para dois vetores, A e B, com 10 números inteiros cada. 
Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados do vetor C.*/

#include <stdio.h>

int main() {
    const int tamanho = 10;
    int vetorA[tamanho];
    int vetorB[tamanho];
    int vetorC[tamanho];

    // Leitura dos valores para os vetores A e B
    printf("Digite os valores para o vetor A:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os valores para o vetor B:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetorB[i]);
    }

    // Cálculo do vetor C = A - B
    for (int i = 0; i < tamanho; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    // Impressão dos valores do vetor C
    printf("Valores do vetor C (A - B):\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}
