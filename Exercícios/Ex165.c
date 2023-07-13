/*165- Escreva um programa que leia uma string qualquer (máximo 80 caracteres) e imprima na tela 
a sua versão espelhada, ou seja, a mesma string mas com a ordem dos caracteres invertida .*/

#include <stdio.h>
#include <string.h>

int main(){

    char palavra[81];

    printf("Digite uma palavra ou frase: ");
    fgets(palavra, 81, stdin);

    for(int i = strlen(palavra); i>=0; i--){
        printf("%c ", palavra[i]);
    }

    return 0;
}