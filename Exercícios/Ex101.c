/*101- Faça um programa que pede que o usuário digite um número inteiro positivo maior que zero e armazene na variável 
TAM. Enquanto o usuário digitar um número inválido, peça para que ele redigite. Um vez definido o valor de TAM, crie um 
vetor com TAM elementos. Inicialize o vetor com valores aleatórios entre 0-100. Uma vez preenchido, armazene em um segundo
vetor cada valor do primeiro vetor só que elevado ao quadrado. Imprima o segundo vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int TAM;

    // Solicita e valida o número inteiro positivo maior que zero
    do {
        printf("Digite um numero inteiro positivo maior que zero: ");
        scanf("%d", &TAM);
    } while (TAM <= 0);

    int vetor1[TAM];
    int vetor2[TAM];
    srand(time(0)); // Seed para geração de números aleatórios

    // Inicialização do vetor1 com valores aleatórios entre 0 e 100
    for (int i = 0; i < TAM; i++) {
        vetor1[i] = rand() % 101; // Gera números aleatórios entre 0 e 100
    }

    // Preenchimento do vetor2 com os valores do vetor1 elevados ao quadrado
    for (int i = 0; i < TAM; i++) {
        vetor2[i] = vetor1[i] * vetor1[i];
    }

    // Impressão do vetor2
    printf("Vetor2: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    return 0;
}
