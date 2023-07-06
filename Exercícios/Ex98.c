/*98- Faça um programa que cria um vetor de inteiros com tamanho 100. Atribua valores aleatórios entre o e 10. Uma vez que o vetor estiver 
inicializado, peça ao usuário um número inteiro entre 0 e 10 e imprima na tela quantas vezes aquele número consta no vetor*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[100];
    int numero, contador = 0;

    // Inicialização do gerador de números aleatórios
    srand(time(NULL));

    // Preenchimento do vetor com valores aleatórios entre 0 e 10
    for (int i = 0; i < 100; i++) {
        vetor[i] = rand() % 11; // Gera um número aleatório entre 0 e 10
    }

    // Solicita ao usuário um número entre 0 e 10
    printf("Digite um número inteiro entre 0 e 10: ");
    scanf("%d", &numero);

    // Conta quantas vezes o número aparece no vetor
    for (int i = 0; i < 100; i++) {
        if (vetor[i] == numero) {
            contador++;
        }
    }

    // Exibe o resultado
    printf("O número %d aparece %d vezes no vetor.\n", numero, contador);

    return 0;
}
