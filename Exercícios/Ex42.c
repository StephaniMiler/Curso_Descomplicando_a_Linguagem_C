/*42- Escrever um programa que implementa uma calculadora de 4 operações(+, -, ∗, /), usando o switch para realizar a 
operação escolhida pelo usuário e imprimir o resultado na tela.  */

#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Escolha a operação (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("O resultado da soma é: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("O resultado da subtração é: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("O resultado da multiplicação é: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("O resultado da divisão é: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operador inválido.\n");
            break;
    }

    return 0;
}


