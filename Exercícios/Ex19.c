/*19- Escreva um programa que gere um número aleatório inteiro entre 0 e 100. Imprima na tela "eh maior que 50" 
ou "eh menor que 50"*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"


int main(){
    srand(time(NULL));

    int number = rand() % 101;

    if (number > 50){
        printf("%i eh maior que 50\n", number);
    }
    else if (number < 50){
        printf("%i eh menor que 50\n", number);
    }
    else{
        printf("%i eh igual a 50!");
    }

    return 0;
}