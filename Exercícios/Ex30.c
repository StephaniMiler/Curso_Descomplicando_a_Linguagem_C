/*30- Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa e diga se a data é válida ou não.
Caso não seja, diga o motivo. Suponha que todos os meses tem 31 dias e que estamos em 2013.*/

#include "stdio.h"

int main(){

    int dia, mes, ano;

    printf("Digite o dia, mês e ano do seu nascimento: \n");
    scanf("%i/%i/%i", &dia, &mes, &ano);

    if (dia > 31){
        printf("Dia invalido!");
    }
    else if (mes > 12){
        printf("Mes invalido!");
    }
    else if (ano > 2013){
        printf("Ano invalido!");
    }
    else {
        printf("A data de nascimento eh: %i/%i/%i", dia, mes, ano);
    }

    return 0;
}