/*10- Escreva um programa que gere dois números inteiros aleatórios no intervalo de 0 a 10. Imprima o primeiro 
elevado ao segundo*/

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"

int main(){
    srand(time(NULL));

    int a = rand() %11;
    int b = rand() %11;
    int resultado = pow(a, b);

    printf("Os numeros sorteados foram: %i, %i\n", a, b);
    printf("O numero %i elevado a %i eh: %i\n", a, b, resultado);

    return 0; 
}