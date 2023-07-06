/*99- Escreva um programa que cria um vetor de 10 posições e o inicialize com números inteiros aleatórios no intervalo [0,50]. 
Preencha um segundo vetor apenas com os números ímpares do primeiro vetor. Imprima os dois vetores, 2 elementos por linha*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int tam = 10;
    int numeros[tam];

    for(int i= 0; i<tam; i++){
        numeros[i]= rand() % 51;
    }

    for(int i= 0; i<tam; i++){
    printf("numeros[%i]: %i\n", i, numeros[i]);
    }

    int impares[tam];
    int posicao = 0;

    for(int i=0; i<tam;i++){
        if(numeros[i] % 2 !=0){
            impares[posicao] = numeros[i];
            posicao++;
        }
    }

    printf("\n");

    for(int i=0; i<posicao; i++){
        printf("impares[%i]: %i\n", i, impares[i]);
    }

    return 0;
}