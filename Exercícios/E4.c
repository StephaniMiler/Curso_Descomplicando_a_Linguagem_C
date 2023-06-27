/*4 - Escreva um programa que pede ao usuário que digite o dia, o mês e o ano de nascimento e imprima na tela*/

#include "stdio.h"

int main(){

    int dia, mes, ano;

    printf("Digite a sua data de nascimento: (00/00/0000 \n");
    scanf("%i/%i/%i", &dia, &mes, &ano);
    printf("\nA data de nascimento eh: %i/%i/%i", dia, mes, ano);
}