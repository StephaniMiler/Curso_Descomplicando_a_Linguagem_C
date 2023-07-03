/*62- Escreva um programa que pergunta um número ao usuário, e mostra sua tabuada completa (de 1 até 10).
Ex: Se o número lido foi 4, imprimir:
4x1 = 4
4x2 = 8
4x3 = 12
…
4x10 = 40*/

#include "stdio.h"

int main(){

    int numero, i;

    printf("Digite um numero: \n");
    scanf("%i", &numero);

    for(i=0; i<=10; i++){
        printf("%i x %i = %i\n", numero, i, numero * i);
    }

    return 0;
}