/*68- Escrever um código em C que peça ao jogador para advinhar o número da sorte (entre 0 e 100) gerado aleatóriamente 
pelo programa. O jogador vai entrando com números e o programa vai informando se é maior ou menor. Quando o jogador 
acertar, imprimir na tela e o número de tentativas.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorte, palpite, tentativas = 0;

    // Inicializando a semente aleatória
    srand(time(0));

    // Gerando o número da sorte aleatoriamente entre 0 e 100
    numeroSorte = rand() % 101;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número da sorte entre 0 e 100.\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroSorte) {
            printf("O número sorteado é maior que %d.\n", palpite);
        } else if (palpite > numeroSorte) {
            printf("O número sorteado é menor que %d.\n", palpite);
        } else {
            printf("Parabéns! Você acertou o número %d em %d tentativas.\n", numeroSorte, tentativas);
        }
    } while (palpite != numeroSorte);

    return 0;
}
