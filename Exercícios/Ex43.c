/*43- Escreva o menu de opções abaixo. 
Menu:
Raiz quadrada de um numero
Seno de um numero
Produto entre o quadrado de um numero e o coseno de outro numero
Soma entre 2 números
Leia a opção do usuário e execute a operação escolhida. Escreva uma mensagem de erro se a opção for inválida.*/

#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Menu:\n");
    printf("1. Raiz quadrada de um número\n");
    printf("2. Seno de um número\n");
    printf("3. Produto entre o quadrado de um número e o cosseno de outro número\n");
    printf("4. Soma entre 2 números\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite um número: ");
            scanf("%f", &num1);
            if (num1 >= 0) {
                resultado = sqrt(num1);
                printf("A raiz quadrada de %.2f é %.2f\n", num1, resultado);
            } else {
                printf("Erro: não é possível calcular a raiz quadrada de um número negativo.\n");
            }
            break;
        case 2:
            printf("Digite um número: ");
            scanf("%f", &num1);
            resultado = sin(num1);
            printf("O seno de %.2f é %.2f\n", num1, resultado);
            break;
        case 3:
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado = num1 * num1 * cos(num2);
            printf("O produto entre o quadrado de %.2f e o cosseno de %.2f é %.2f\n", num1, num2, resultado);
            break;
        case 4:
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("A soma de %.2f e %.2f é %.2f\n", num1, num2, resultado);
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
