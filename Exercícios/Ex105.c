/*105- Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo, nas posições pares os valores
 do primeiro e nas posições ímpares os valores do segundo.*/

 #include <stdio.h>

int main() {
    const int tamanho = 10;
    int vetor1[tamanho];
    int vetor2[tamanho];
    int vetorResultado[2 * tamanho];

    // Leitura dos valores para o vetor1
    printf("Digite os valores para o vetor1:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Leitura dos valores para o vetor2
    printf("Digite os valores para o vetor2:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Cálculo do vetorResultado
    for (int i = 0; i < tamanho; i++) {
        vetorResultado[2 * i] = vetor1[i];       // Posições pares contêm valores do vetor1
        vetorResultado[2 * i + 1] = vetor2[i];   // Posições ímpares contêm valores do vetor2
    }

    // Impressão do vetorResultado
    printf("Vetor resultado:\n");
    for (int i = 0; i < 2 * tamanho; i++) {
        printf("%d ", vetorResultado[i]);
    }
    printf("\n");

    return 0;
}
