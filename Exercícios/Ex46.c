/*46- Crie um programa que lê um número inteiro e imprime na tela todos os números ímpares menores ou iguais ao número 
lido. Considere 0 como o mínimo valor possível */

#include "stdio.h"

int main(){

    int numero, i;

    printf("Digite um numero maior que maior que 0: \n");
    scanf("%i", &numero);

    for (i = numero; i >= 0; i--){
        if (i % 2 != 0){
            printf("%i\n", i);
        }
    }
}