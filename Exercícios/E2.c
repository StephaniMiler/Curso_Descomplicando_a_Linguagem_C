/*2- Crie 3 variáveis: uma inteira, uma real e outra caracter e atribua valores a ela. Imprima usando o pintf*/

#include "stdio.h"

int main(void){

    int idade;
    float altura;
    char nome;

    idade = 23;
    altura = 1.50;
    nome = 'S';

    printf("%i, %f e %c sao, respectivamente, \n" , idade, altura, nome);
    return 0;
}