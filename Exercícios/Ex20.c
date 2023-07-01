/*20- Escreva um programa que peça ao usuario dois numeros reais: a e b. Imprima o resultado de a/b apenas se b for
diferente de 0. Se b!=0, imprima o resultado, senão imprima que b é igual a 0*/

#include "stdio.h"

int main(){

    float a, b;
    float resultado;

    printf("Digite um numero: \n");
    scanf("%f", &a);
    printf("Digite mais um numero: \n");
    scanf("%f", &b);

    resultado = a/b;

    if(b != 0){
        printf("%f dividido por %f eh igual a %f\n", a, b, resultado);
    }
    else{
        printf("%f eh igual a 0, portanto, nao eh possivel realizar a divisao\n", b);
    }

    return 0;
}