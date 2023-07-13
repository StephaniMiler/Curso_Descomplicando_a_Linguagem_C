/*162- Escreva um programa que leia as dimensões e os dados de duas matrizes bidimensionais 
(máximo 20 linhas e 20 colunas) e imprima na tela o resultado da multiplicação destas duas 
matrizes.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int TAM;

    printf("Digite as dimensoes linhas x colunas das matrizes: ");
    scanf("%d", &TAM);

    int matriz1[TAM][TAM];
    int matriz2[TAM][TAM];
    int matriz3[TAM][TAM];

    // Monta as matrizes 1 e 2
    for (int i = 0; i < TAM; i++) {
        printf("Digite os valores da linha %d das matrizes: ", i);
        for (int j = 0; j < TAM; j++) {
            scanf("%d %d", &matriz1[i][j], &matriz2[i][j]);
        }
    }

    // Monta a matriz 3 (resultado da multiplicação)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz3[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }

    // Imprime as matrizes
    printf("Matriz 1:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("Matriz 2:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("Matriz Resultante (Multiplicação):\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
