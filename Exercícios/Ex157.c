/*157- Escreva um programa que armazene o quadrado de todos os números inteiros de 1 a 20 em um 
vetor e depois imprima os valores armazenados em ordem decrescente, um por linha.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[20];

    for(int i= 1; i<=20; i++){
        vetor[i-1] = i * i;
    }

    //Imprime em ordem normal primeiro:
    for(int i=0; i <20; i++){
        printf("%d, ", vetor[i]);
    }

    printf("\n\n");

    //Imprime ao contrário:
    for(int i=19; i>=0; i--){
        printf("%d, ", vetor[i]);
    }

    return 0;
}