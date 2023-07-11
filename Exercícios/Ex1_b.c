/*1- a) Dada uma entrada x, a saída y corresponde a? Supondo entrada x=5 (y=15)
b)Apresente o código fonte completo do programa.*/

#include <stdio.h>

int main(){

    int x;
    int y = 0;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    for(int i = x; i>0; i--){
        y = y + x;
        x = x-1;
    }

    printf("O valor de y eh: %d", y);

    return 0;
}

