/* 13- Crie 3 variáveis inteiras (a, b e c) e as inicialize aleatoriamente com valores entre 1 e 20. Imprima na tela o 
resultado da seguinte equação: (-b + √b^2 + 4.a.c)/(2.a) */

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"

int main(){
    srand(time(NULL));

    int a = rand() %21;
    int b = rand() %21;
    int c = rand() %21;
    float resultado;
    float raiz;
    int potencia;

    potencia = b * b;
    raiz = sqrt(potencia + 4 * (a * c));
    resultado = (b * -1) + raiz / (2 * a);

    printf("Os valores de A, B e C sao, respectivamente: %i, %i, %i\n", a, b, c);
    printf("O resultado da equacao eh: %f\n", resultado);

}