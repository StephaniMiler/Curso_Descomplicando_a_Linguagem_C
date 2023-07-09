/*137 - Preencha duas matrizes 4 x 4 de forma aleatória com valores entre 0 e 20, e escreva uma terceira com os maiores 
valores de cada posição das matrizes preenchidas.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int matriz1[4][4];
    int matriz2[4][4];
    int matriz3[4][4];

    // Preencher as matrizes 1 e 2 com valores aleatórios entre 0 e 20
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            matriz1[linha][coluna] = rand() % 21;
            matriz2[linha][coluna] = rand() % 21;
        }
    }

    // Preencher a matriz 3 com os maiores valores de cada posição
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            if (matriz1[linha][coluna] > matriz2[linha][coluna]) {
                matriz3[linha][coluna] = matriz1[linha][coluna];
            } else {
                matriz3[linha][coluna] = matriz2[linha][coluna];
            }
        }
    }

    // Imprimir as matrizes
    printf("Matriz 1:\n");
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            printf("%2d ", matriz1[linha][coluna]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            printf("%2d ", matriz2[linha][coluna]);
        }
        printf("\n");
    }

    printf("\nMatriz 3 (maiores valores):\n");
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            printf("%2d ", matriz3[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
