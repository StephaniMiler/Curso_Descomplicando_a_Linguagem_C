/*17- Elaborar um programa em linguagem C para somar dois números inteiros e mostrar o valor da soma na tela. 
Você só deve imprimir a mensagem se a soma dos números for maior que 10.*/

#include "stdio.h"

int main(){

    int a, b;
    int soma;

    printf("Digite um número: \n");
    scanf("%i", &a);
    printf("Digite mais um número: \n");
    scanf("%i", &b);

    soma = a + b;

    if(soma > 10){
        printf("O valor da soma eh: %i\n", soma);
    }
    else if (soma == 10){
        printf("O valor da soma eh igual a 10!\n");
    }
    else{
        printf("O valor da soma nao atingiu 10!");
    }

    return 0;
}