/*79- Escreva um programa que leia o valor de x, inicializa y com 0 e enquanto x for maior que 0, y recebe y + x e x 
recebe x-1. Quando x não for maior que 0 imprime y na tela e encerra o programa.*/

#include "stdio.h"

int main(){

    int x,y;
    y=0;

    printf("Digite o valor de x: \n");
    scanf("%d", &x);

    for(int i= x; i >=0; i--){
        y = y + x;
        x = x - 1;
    }

    printf("O valor de y eh: %d", y);

    return 0;

}