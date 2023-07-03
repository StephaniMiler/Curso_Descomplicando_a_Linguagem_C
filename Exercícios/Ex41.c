/*41- Escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a este numero. 
Isto e, domingo se 1, segunda-feira se 2, e assim por diante.*/

#include "stdio.h"

int main(){

    int dia;

    printf("Digite um numero de 1 a 7: \n");
    scanf("%i", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingo!");
        break;
    case 2:
        printf("Segunda!");
        break;
    case 3:
        printf("Terça!");
        break;
    case 4:
        printf("Quarta!");
        break;
    case 5:
        printf("Quinta!");
        break;
    case 6:
        printf("Sexta!");
        break;
    case 7:
        printf("Sabado!");
        break;    
    default:
        printf("Numero invalido!");
        break;
    }
    return 0;
}