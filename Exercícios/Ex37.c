/*37-Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (+, -, /, *). 
O usuário escolhe uma das opções e o seu programa então pede dois valores reais, realiza a operação e imprime o 
resultado na tela.*/

#include "stdio.h"
int main(){

    int opcao;
    float a, b, resultado;

    printf("Digite dois valores: \n");
    scanf("%f\n %f", &a, &b);
    printf("Digite uma opção: 1 + 2 - 3 / 4 *: \n");
    scanf("%i", &opcao);

    if (opcao == 1){
        resultado = a + b;
    }
    else if (opcao == 2){
        resultado = a - b;
    }
    else if (opcao == 3){
        resultado = a / b;
    }
    else {
        resultado = a * b;
    }

    printf("O resultado eh: %.2f\n", resultado);

    return 0;
}