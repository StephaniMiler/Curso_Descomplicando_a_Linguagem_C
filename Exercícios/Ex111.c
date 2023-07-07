/*111- Leia um vetor com 10 números reais, ordene os elementos deste vetor de forma crescente (menor para o maior), e no 
final imprima os elementos do vetor ordenado.*/

#include <stdio.h>

int main() {
    const int tamanho = 10;
    float vetor[tamanho];

    // Leitura dos elementos para o vetor
    printf("Digite os 10 números reais:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &vetor[i]);
    }

    // Ordenação dos elementos em ordem crescente (utilizando o algoritmo bubble sort)
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                float temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Impressão dos elementos do vetor ordenado
    printf("Vetor ordenado em ordem crescente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}
