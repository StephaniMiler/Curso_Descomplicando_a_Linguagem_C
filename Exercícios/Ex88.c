/*88- - Escreva um programa que leia uma sequência de números inteiros positivos
fornecidos pelo usuário até que seja digitado um número zero. Quando isso ocorrer,
o programa deve exibir a média aritmética dos valores digitados e encerrar a
execução.*/

#include "stdio.h"

int main(){

    int numero, cont =0;
    int soma =0;
    float media;

    while(numero !=0){
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);
        soma = soma + numero;
        if(numero !=0){
            cont++;
        }
        
    }
    media = soma/cont;
    printf("A media dos %d valores digitados eh: %f", cont, media);
    return 0;
}