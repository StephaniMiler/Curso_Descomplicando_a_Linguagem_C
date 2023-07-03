/*48- Crie um programa que imprime em ordem decrescente todos os números inteiros maiores que zero a partir de um numero 
fornecido pelo usuário.*/

#include "stdio.h"

int main(){

    int numero, i;

    printf("Digite um numero: \n");
    scanf("%i", &numero);

    for(i = numero; i > 0; i--){
        printf("%i\n", i);
    }
    return 0;
}