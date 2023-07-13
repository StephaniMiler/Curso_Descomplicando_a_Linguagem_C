/*161- Escreva um programa que carregue dois vetores com 10 valores inteiros cada um e mostre o 
vetor resultante da intercalação destes dois vetores:
Exemplo:
Vetor 1: |3|5|4|2|2|5|3|2|5|9|
Vetor 2: |3|5|4|2|2|5|3|2|5|9|
Saída: |3|3|5|5|4|4|2|2|2|2|5|5|3|3|2|2|5|5|9|9| */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor1[10];
    int vetor2[10];
    int vetor3[20];

    //Insere os valores nos vetores 1 e 2
    for(int i=0; i<10; i++){
        printf("Digite o valor da posicao %d dos vetores 1 e 2: ", i);
        scanf("%d %d", &vetor1[i], &vetor2[i]);
    }

    //Monta o vetor 3
    int j = 0;
    for (int i = 0; i < 10; i++) {
        vetor3[j++] = vetor1[i];
        vetor3[j++] = vetor2[i];
    }

    printf("\n");
    //Imprime o vetor 1:
    for(int i= 0; i<10; i++){
        printf("%d ", vetor1[i]);
    }
    printf("\n");
    //Imprime o vetor 2:
    for(int i= 0; i<10; i++){
        printf("%d ", vetor2[i]);
    }
    printf("\n");
    //Imprime o vetor 3:
    for(int i= 0; i<20; i++){
        printf("%d ", vetor3[i]);
    }

    return 0;
}