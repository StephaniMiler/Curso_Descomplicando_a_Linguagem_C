/*16- Escreva um programa que peça dois números reais ao usuário a e b. Imprima o maior dos dois valores na tela*/

#include "stdio.h"

void main(){

    float a, b;

    printf("Digite dois numeros reais: \n");
    scanf("%f %f", &a, &b);

    if(a > b){
        printf("%f eh maior que %f", a, b);
    }
    else if (a<b){
        printf("%f eh maior que %f", b, a);
    }
    else
        printf("%f e %f sao iguais", a, b);
}