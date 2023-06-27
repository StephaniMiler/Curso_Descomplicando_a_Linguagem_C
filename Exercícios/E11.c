/*11- Escreva um programa que gere 1 númeor inteiro aleatório no intervalo de 50 a 200. Imprima 1 se este número for par e 0 se for ímpar*/

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"

int main(){

    srand(time(NULL));

    int num1 = 50 + rand() % 151;
    int res = num1 % 2 == 0;

    printf("O numero %i eh  %i (par se 1 impar se 0)\n", num1, res);
}