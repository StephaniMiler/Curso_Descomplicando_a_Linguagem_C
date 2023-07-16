/*4- Faça um programa que leia uma sequência de números inteiros positivos, fornecidos pelo 
usuário até que seja digitado um número negativo. Quando isto ocorrer, o programa deve exibir o 
resultado do produto de todos os valores digitados (exceto o número negativo) e encerrar a 
execução*/

#include <stdio.h>

int main(){

    int numeros;
    int produto = 1;

    while(numeros >0){
        printf("Digite um numero maior que 0: ");
        scanf("%d", &numeros);
        if(numeros > 0){
           produto = produto * numeros;
        }
        
    }

    printf("O valor do produto eh: %d", produto);

    return 0;
}