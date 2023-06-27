/*7- Escreva um programa que requisita a idade do usuário em anos, converta e imprima o valor em dias*/

#include "stdio.h"

int main(){

    int idade;
    int dias;

    printf("Quantos anos voce tem?\n");
    scanf("%i", &idade);
    
    dias = (idade * 365);
    printf("A sua idade em dias eh: %i\n", dias);
}