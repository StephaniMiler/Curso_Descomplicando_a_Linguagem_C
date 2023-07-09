/*130- Escrever um programa que define e inicializa uma matriz de tamanho 6x6, de forma que seja a matriz identidade. 
Em seguida, imprimir a matriz na tela*/

#include <stdio.h>

int main() {
    int matriz[6][6] = {0};

    // Inicializar a matriz como uma matriz identidade
    for (int i = 0; i < 6; i++) {
        matriz[i][i] = 1;
    }

    // Imprimir a matriz
    printf("Matriz Identidade:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
