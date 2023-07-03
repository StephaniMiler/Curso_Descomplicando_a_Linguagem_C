/*52- Escreva um programa que leia 10 números reais e imprima o menor valor lido e o maior valor lido*/

#include "stdio.h"
int main(){

    float numero;
    float maior, menor;
    maior = -1;
    menor= 10000;

    for(int i=1; i<=10; i++){
        printf("Digite um numero: ");
        scanf("%f", &numero);

        if(numero > maior){
            maior = numero;
        }
        if(numero < menor){
            menor = numero;
        }
    }

    printf("O maior numero eh: %f\n", maior);
    printf("O menor numero eh: %f\n", menor);

    return 0;
}