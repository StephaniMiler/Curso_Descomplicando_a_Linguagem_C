/*9- Escreva um programa que pede ao usuário dois números. Imprima a raiz quadrada do seno do primeiro número e imprima 
o segundo número elevado ao coseno do primeiro numero*/

#include "stdio.h"
#include "math.h"
int main(){
    int a, b;
    float seno, cosseno;
    float raiz, potencia;

    printf("Informe um numero: \n");
    scanf("%i", &a);
    printf("Informe mais um numero: \n");
    scanf("%i", &b);

    seno = sin(a);
    cosseno = cos(a);
    raiz = sqrt(seno);
    potencia = pow(b, cosseno);

    printf("A raiz quadrada do seno de %i eh %f\n", a, raiz);
    printf("O numero %i elevado a %f eh %f\n", b, cosseno, potencia);

    return 0;
}