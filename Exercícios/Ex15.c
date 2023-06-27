
/*15- Escreva um programa que peça ao usuário dois numeros reais a e b. Imprima o resultado de a e b, apenas se b for diferente de 0*/

#include "stdio.h"

void main(){

    float a, b;
    float resultado;

    printf("Digite dois numeros reais: \n");
    scanf("%f %f", &a, &b);

    resultado = a / b;

    if (b !=0){
        printf("\n %f dividido por %f eh: %f \n", a, b, resultado);
    }
}