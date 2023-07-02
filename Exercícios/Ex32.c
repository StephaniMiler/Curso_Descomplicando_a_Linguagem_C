/*32- Faça um programa que receba a idade de uma pessoa e imprima na tela em qual categoria ela se encontra:
*0- 14: infantil
*15-17 juvenil
*18-... adulto*/

#include "stdio.h"

int main(){

    int idade;

    printf("Digite a sua idade: \n");
    scanf("%i", &idade);

    if (idade <= 14){
        printf("Sua categoria eh infantil!");
    }
    else if (idade <=17){
        printf("Sua categoria eh juvenil!");
    }
    else {
        printf("Sua categoria eh adulto!");
    }

    return 0;
}