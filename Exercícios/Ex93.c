/*93- Escreva um programa em linguagem C que leia as alturas (valor ponto flutuante)
de 6 pessoas e armazene em um vetor. Em seguida, encontre e imprima a maior
altura e a posição (índice) dessa pessoa no vetor*/

#include "stdio.h"

int main(){

    float alturas[6];
    float maior = 0;
    int posicaoMaior = 0;

    for(int i=0; i<6; i++){
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &alturas[i]);
        if(alturas[i] > maior){
            maior = alturas[i];
            posicaoMaior = i + 1;
        }
    }

    printf("\nA maior altura foi da %d pessoa, medindo %.2f.", posicaoMaior, maior);

    return 0;
}