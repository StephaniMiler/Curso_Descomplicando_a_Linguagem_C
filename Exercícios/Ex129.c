/*129- Escrever um programa que define e inicializa com 0 todos os elementos de uma matriz 50x30 e a imprima na tela*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[50][30];

    for(int linha=0; linha <50; linha ++){
        for(int coluna =0; coluna <30; coluna ++){
            matriz[linha][coluna] = 0;
        }
    }

    for(int linha=0; linha <50; linha ++){
        for(int coluna =0; coluna <30; coluna ++){
            printf("%i", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;

}