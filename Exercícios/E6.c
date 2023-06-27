/*6- Escreva um programa que pede ao usuário que digite a primeira letra do seu nome e imprima na tela*/

#include "stdio.h"
int main(){

    char letra;

    printf("Digite a primeira letra do seu nome: \n");
    scanf("%c", &letra);
    printf("\n a inicial do seu nome eh: %c" , letra);

}