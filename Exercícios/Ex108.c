/*108- Criar um algoritmo que leia dois vetores de números inteiros, tendo cada um 10 e 20 elementos respectivamente, e 
apresentar os elementos que não são comuns aos dois vetores.*/

#include <stdio.h>

int main() {
    const int tamanho1 = 10;
    const int tamanho2 = 20;
    int vetor1[tamanho1];
    int vetor2[tamanho2];

    // Leitura dos elementos para o vetor1
    printf("Digite os elementos para o vetor1:\n");
    for (int i = 0; i < tamanho1; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Leitura dos elementos para o vetor2
    printf("Digite os elementos para o vetor2:\n");
    for (int i = 0; i < tamanho2; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Verificação dos elementos não comuns
    printf("Elementos que não são comuns aos dois vetores:\n");
    for (int i = 0; i < tamanho1; i++) {
        int comum = 0;
        for (int j = 0; j < tamanho2; j++) {
            if (vetor1[i] == vetor2[j]) {
                comum = 1;
                break;
            }
        }
        if (!comum) {
            printf("%d ", vetor1[i]);
        }
    }

    for (int i = 0; i < tamanho2; i++) {
        int comum = 0;
        for (int j = 0; j < tamanho1; j++) {
            if (vetor2[i] == vetor1[j]) {
                comum = 1;
                break;
            }
        }
        if (!comum) {
            printf("%d ", vetor2[i]);
        }
    }

    printf("\n");

    return 0;
}
