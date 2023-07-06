/*96- Faça um programa que crie um vetor de reais com 8 posições e leia seus valores. Em seguida, leia também dois valores
inteiros X e Y quaisquer(entre 0 e 7) correspondentes às duas posições no vetor. Ao final seu programa deverá escrever a 
soma dos valores encontrados nas respectivas posições X e Y*/

#include <stdio.h>

int main(){

    float vetor[8], soma;
    int posicao1, posicao2;

    for(int i=0; i<=7; i++){
        printf("Digite o valor da posicao %d: ", i + 1);
        scanf("%f", &vetor[i]);
        getchar();
    }
    printf("Digite duas posicoes do vetor: ");
    scanf("%d %d", &posicao1, &posicao2);
    soma = vetor[posicao1] + vetor[posicao2];

    printf("A soma dos vetores nas posicoes %d e %d eh: %f", posicao1, posicao2, soma);

    return 0;
}