/*142- Em um tabuleiro 5x5, você precisa posicionar 5 inimigos, 2 heróis, 4 armas e 2 porções aleatoriamente. Ao final 
do programa, imprima a matriz com todas as peças posicionadas.
OBS: Os demais espaços devem estar livres. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_TABULEIRO 5
#define NUM_INIMIGOS 5
#define NUM_HEROIS 2
#define NUM_ARMAS 4
#define NUM_PORCOES 2

typedef struct {
    int x;
    int y;
} Posicao;

void imprimirTabuleiro(char tabuleiro[][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializar tabuleiro com espaços vazios
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = ' ';
        }
    }

    // Posicionar inimigos
    srand(time(NULL));
    for (int i = 0; i < NUM_INIMIGOS; i++) {
        int x = rand() % TAMANHO_TABULEIRO;
        int y = rand() % TAMANHO_TABULEIRO;
        tabuleiro[x][y] = 'I';
    }

    // Posicionar heróis
    for (int i = 0; i < NUM_HEROIS; i++) {
        int x = rand() % TAMANHO_TABULEIRO;
        int y = rand() % TAMANHO_TABULEIRO;
        // Verificar se a posição está vazia
        while (tabuleiro[x][y] != ' ') {
            x = rand() % TAMANHO_TABULEIRO;
            y = rand() % TAMANHO_TABULEIRO;
        }
        tabuleiro[x][y] = 'H';
    }

    // Posicionar armas
    for (int i = 0; i < NUM_ARMAS; i++) {
        int x = rand() % TAMANHO_TABULEIRO;
        int y = rand() % TAMANHO_TABULEIRO;
        // Verificar se a posição está vazia
        while (tabuleiro[x][y] != ' ') {
            x = rand() % TAMANHO_TABULEIRO;
            y = rand() % TAMANHO_TABULEIRO;
        }
        tabuleiro[x][y] = 'A';
    }

    // Posicionar porções
    for (int i = 0; i < NUM_PORCOES; i++) {
        int x = rand() % TAMANHO_TABULEIRO;
        int y = rand() % TAMANHO_TABULEIRO;
        // Verificar se a posição está vazia
        while (tabuleiro[x][y] != ' ') {
            x = rand() % TAMANHO_TABULEIRO;
            y = rand() % TAMANHO_TABULEIRO;
        }
        tabuleiro[x][y] = 'P';
    }

    // Imprimir o tabuleiro com as peças posicionadas
    imprimirTabuleiro(tabuleiro);

    return 0;
}
