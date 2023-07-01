/*8- Escreva um programa que converta uma temperatura fornecidaa pelo usuário de ºF para ºC 
(C = (F -32)* 5/9)*/

#include "stdio.h"

int main(){
    float grausC;
    float grausF;

    printf("Digite a temperatura em ºF: \n");
    scanf("%f", &grausF);

    grausC = (grausF - 32) * 5/9;
    printf("A temperatura em ºC eh: %f\n", grausC);
}