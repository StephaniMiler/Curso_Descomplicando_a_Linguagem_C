/*94 - Faça um programa que crie um vetor de inteiros denominado A, com tamanho 6. O programa deve executar os seguintes passos:
1- Atribua os seguintes valores a ese vetor: 1, 0, 5, -2, -5, 7
2- Armazene em uma variável inteira simples a soma entre os valores das posições A[0], A[1] e A[5] do vetor e imprima o valor da soma
3- Modifique o vetor da posição 4, atribuindo a esta posição o valor de 100
4- Imprima na tela a soma entre o quadrado do valor armazenado na posição 3 e 5 do vetor
5- Mostre na tela cada valor do vetor A, um em cada linha */

#include "stdio.h"

int main(){

    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma1 = 0, soma2 =0;

    soma1 = A[0] + A[1] + A[5]; //1 + 0 + 7 = 8

    printf("O valor da soma dos vetores das posicoes 0, 1 e 5 eh: %i\n", soma1);

    A[3] = 100;

    soma2 = (A[2] * A[2]) + (A[4] * A[4]); //25 + 25 = 50

    printf("A soma entre o quadrado do valor armazenado na posicao 3 e 5 do vetor eh: %i\n", soma2);

    printf("\nOs valores de cada vetor: \n");
    printf("%i\n", A[0]); //1
    printf("%i\n", A[1]); //0
    printf("%i\n", A[2]); //5
    printf("%i\n", A[3]); //100
    printf("%i\n", A[4]); //-5
    printf("%i\n", A[5]); //7

    return 0;
}
