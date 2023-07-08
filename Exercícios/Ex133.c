/*133- Um jogo possui 4 tipos de peças: azul, vermelha, verde e amarela. preencha aleatoriamente um tabuleiro 10x10 com 
estas peças. Ao final do programa, informe quantas peças de cada cor foram colocadas no tabuleiro.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int tabuleiro[10][10];
    int azul = 0;
    int vermelha = 0;
    int verde = 0;
    int amarela = 0;

    //Preenche o tabuleiro com números aleatórios entre 0 e 3, sendo cada um uma cor:
    for(int linha = 0; linha <10; linha ++){
        for(int coluna = 0; coluna <10; coluna ++){
            tabuleiro[linha][coluna] = rand() % 4;
            if (tabuleiro[linha][coluna] == 0){
                azul++;
            }
            else if(tabuleiro[linha][coluna] == 1){
                vermelha++;
            }
            else if(tabuleiro[linha][coluna] == 2){
                verde++;
            }
            else{
                amarela++;
            }
        }
    }

    //Imprime a matriz:
    for(int linha = 0; linha <10; linha ++){
        for(int coluna = 0; coluna <10; coluna ++){
            printf("%i",tabuleiro[linha][coluna]);
        }

        printf("\n");
    }

    //Informa a quantidade de peças de cada cor:
    printf("Foram colocadas no tabuleiro: %i pecas azuis, %i vermelhas, %i verdes e %i amarelas. ", azul, vermelha, verde, amarela);

    return 0;

}