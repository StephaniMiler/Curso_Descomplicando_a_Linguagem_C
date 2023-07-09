/*141- Faça um programa que leia duas matrizes 3 x 3 com valores reais. Ofereça ao usuário um menu de opções:
Somar as duas matrizes
Subtrair a primeira matriz da segunda
Adicionar uma constante as duas matrizes

Nas duas primeiras opções uma terceira matriz 3 x 3 deve ser criada. Na terceira opção o valor da constante deve ser lido 
e cada valor da matriz deve ser somado ao valor lido.*/

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

// Função para somar duas matrizes
void somarMatrizes(float matriz1[][COLUNAS], float matriz2[][COLUNAS], float resultado[][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Função para subtrair uma matriz da outra
void subtrairMatrizes(float matriz1[][COLUNAS], float matriz2[][COLUNAS], float resultado[][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = matriz2[i][j] - matriz1[i][j];
        }
    }
}

// Função para adicionar uma constante a uma matriz
void adicionarConstante(float matriz[][COLUNAS], float constante) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] += constante;
        }
    }
}

// Função para imprimir uma matriz
void imprimirMatriz(float matriz[][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matriz1[LINHAS][COLUNAS];
    float matriz2[LINHAS][COLUNAS];
    float resultado[LINHAS][COLUNAS];
    float constante;

    // Leitura da primeira matriz
    printf("Digite os valores da primeira matriz:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Valor para a posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz1[i][j]);
        }
    }

    // Leitura da segunda matriz
    printf("\nDigite os valores da segunda matriz:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Valor para a posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz2[i][j]);
        }
    }

    int opcao;
    printf("\nMenu de Opcoes:\n");
    printf("1. Somar as duas matrizes\n");
    printf("2. Subtrair a primeira matriz da segunda\n");
    printf("3. Adicionar uma constante as duas matrizes\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            somarMatrizes(matriz1, matriz2, resultado);
            printf("\nResultado da soma das matrizes:\n");
            imprimirMatriz(resultado);
            break;
        case 2:
            subtrairMatrizes(matriz1, matriz2, resultado);
            printf("\nResultado da subtracao da primeira matriz da segunda:\n");
            imprimirMatriz(resultado);
            break;
        case 3:
            printf("\nDigite a constante a ser adicionada: ");
            scanf("%f", &constante);
            adicionarConstante(matriz1, constante);
            adicionarConstante(matriz2, constante);
            printf("\nMatriz 1 com a constante adicionada:\n");
            imprimirMatriz(matriz1);
            printf("\nMatriz 2 com a constante adicionada:\n");
            imprimirMatriz(matriz2);
            break;
        default:
            printf("\nOpcao invalida.\n");
            break;
    }

    return 0;
}
