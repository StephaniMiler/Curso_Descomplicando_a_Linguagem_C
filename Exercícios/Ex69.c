/*69- Construa um programa que imprime a soma de todos os valores positivos digitados pelo usuário até que ele digite um 
número negativo.*/

#include "stdio.h"

int main(){

    int numero, soma;
    soma = 0;

    do{
        printf("\nDigite um numero: ");
        scanf("%i", &numero);
        soma = soma + numero;
       
    }while (numero >= 0);
   
    
    printf("\nA SOMA DOS NÚMEROS DIGITADOS EH: %i ", soma);

    return 0;
}