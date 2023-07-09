/*138- Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo. Sabendo que a cartela 
deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro da cartela. 
O programa deve exibir na tela a cartela gerada.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 5
#define COLUNAS 5
#define NUM_MAX 100

int main() {
    srand(time(NULL));

    int cartela[LINHAS][COLUNAS];
    int numeros[NUM_MAX];

    // Inicializar vetor de números disponíveis
    for (int i = 0; i < NUM_MAX; i++) {
        numeros[i] = i;
    }

    // Embaralhar o vetor de números disponíveis
    for (int i = NUM_MAX - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = temp;
    }

    // Preencher a cartela
    for (int linha = 0; linha < LINHAS; linha++) {
        for (int coluna = 0; coluna < COLUNAS; coluna++) {
            cartela[linha][coluna] = numeros[linha * COLUNAS + coluna];
        }
    }

    // Imprimir a cartela
    printf("Cartela de Bingo:\n");
    for (int linha = 0; linha < LINHAS; linha++) {
        for (int coluna = 0; coluna < COLUNAS; coluna++) {
            printf("%2d ", cartela[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
