/*103- Leia 10 números inteiros e armazene em um vetor. Em seguida imprima os elementos que são primos e suas respectivas
posições no vetor.*/

#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    const int tamanho = 10;
    int vetor[tamanho];

    // Leitura dos números e armazenamento no vetor
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Impressão dos números primos e suas respectivas posições
    printf("Numeros primos encontrados:\n");
    for (int i = 0; i < tamanho; i++) {
        if (ehPrimo(vetor[i])) {
            printf("Numero: %d | Posicao: %d\n", vetor[i], i);
        }
    }

    return 0;
}
