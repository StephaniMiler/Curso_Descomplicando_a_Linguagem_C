/*102- Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a 
posição que ele se encontra.*/

#include <stdio.h>

int main() {
    const int tamanho = 10;
    int vetor[tamanho];

    // Leitura dos números e armazenamento no vetor
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Impressão do vetor
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Encontrar o maior elemento e sua posição
    int maior = vetor[0];
    int posicao = 0;
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    // Impressão do maior elemento e sua posição
    printf("Maior elemento: %d\n", maior);
    printf("Posicao: %d\n", posicao);

    return 0;
}
