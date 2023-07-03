/*53- Faça um programa que leia dois números, calcule e mostre:
-A Soma dos números pares desse intervalo de números
-A multiplicação dos númeroa ímpares*/

#include "stdio.h"
int main(){

    int inferior, superior;

    printf("Digite os limites: ");
    scanf("%i %i", &inferior, &superior);

    int soma = 0;
    int multiplicacao = 1;

    for(int i= inferior; i <= superior; i++){
        if(i % 2 == 0){
            soma = soma + i;
        }
        else {
            multiplicacao = multiplicacao * i;
        }
    }
    printf("A soma dos pares entre %i e %i eh: %i\n", inferior, superior, soma);
    printf("A multiplicacao dos impares entre %i e %i eh: %i\n", inferior, superior, multiplicacao);

    return 0;
}