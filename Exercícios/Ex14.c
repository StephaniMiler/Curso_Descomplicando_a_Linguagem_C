/*14- Escreva um programa que gere um numero aleatorio inteiro entre 0 e 100. Imprima na tela "eh maior que 50", se for maior*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"

void main(){
    srand(time(NULL));

    int number = rand() % 101;

    if(number > 50){
        printf("O numero %i eh maior que 50", number);
    }

}