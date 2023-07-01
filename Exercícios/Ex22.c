/*22-Faça um programa que lê 2 valores A e B (inteiros) e informa se A é divisível por B ou não.*/

#include "stdio.h"

int main(){

    int a, b;

    printf("Digite um numero: \n");
    scanf("%i", &a);
    printf("Digite mais um numero: \n");
    scanf("%i", &b);

    if(a % b == 0){
        printf("%i eh divisivel por %i", a,b);
    }
    else{
        printf("%i nao eh divisivel por %i", a,b);
    }

    return 0;
}