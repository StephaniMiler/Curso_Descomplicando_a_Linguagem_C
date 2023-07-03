/*60- Faça um programa que leia um número inteiro positivo n e imprima todos os números de 0 até n em ordem 
crescente usando while*/

#include "stdio.h"

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%i", &n);

    int i = 0;

    while(i <= n){
        printf("%i", i);
        i++;
    }
}