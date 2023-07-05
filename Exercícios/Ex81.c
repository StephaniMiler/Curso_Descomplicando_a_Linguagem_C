/*81- Faça um programa que leia uma sequência de números inteiros positivos fornecidos pelo usuário até que seja digitado 
um número negativo, quando isto ocorrer, o programa deve exibir o resultado do produto de todos os valores digitados, 
exceto o número negativo e encerrar a execução*/

#include "stdio.h"
int main(){

    int numero, produto = 1;

    while(numero >= 0){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero >=0){
            produto = produto * numero;
        }
    }
    printf("%d", produto);

    return 0;
}