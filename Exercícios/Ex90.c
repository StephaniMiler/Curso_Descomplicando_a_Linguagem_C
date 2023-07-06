/*90- Escreva um programa que leia uma sequência de números inteiros fornecidos
pelo usuário e exiba o maior número digitado. O programa deve encerrar quando for
digitado o número zero*/

#include "stdio.h"

int main(){

    int numero, maior =0;

    while(numero != 0){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero > maior){
            maior = numero;
        }
    }

    printf("O maior numero digitado foi: %d", maior);

    return 0;
}