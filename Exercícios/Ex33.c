/*33 - Quero comprar tênis para correr. O modelo comum custa R$300 e o modelo de competição custa R$600.
Escreva um programa que pergunte quanto de dinheiro eu tenho e diga se posso comprar um par de tenis e o modelo*/

#include "stdio.h"
int main(){

    float carteira;

    printf("Insira o valor que voce tem em dinheiro: \n");
    scanf("%f", &carteira);

    if (carteira >= 600.00){
        printf("Uau, voce pode comprar o modelo de competicao!! u.u");
    }
    else if (carteira >= 300.00){
        printf("Voce pode comprar o modelo comum!");
    }
    else{
        printf("Que pena!! Nao vai dar pra voce comprar nenhum tenis :(");
    }

    return 0;
}