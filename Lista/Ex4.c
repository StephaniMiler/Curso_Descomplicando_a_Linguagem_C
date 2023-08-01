/*4- Escreva um programa que solicite ao usuário um número inteiro positivo e imprima a contagem 
regressiva a partir desse número até zero, utilizando um loop.*/

#include <stdio.h>
int main(){

    int numero;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    for(int i = numero; i>=0; i--){
        printf("%d\n", i);
    }

    return 0;
}