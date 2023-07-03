/*61- Faça um programa que leia de forma indefinida vários números, calcule e mostre:
(a) A soma dos números digitados
(b) A quantidade de números digitados
(c) A média dos números digitados
(d) O maior número digitado
(e) O menor número digitado
(f) A média dos números pares
Finalize a entrada de dados caso o usuário informe o valor 0.*/

#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int quantidade = 0;
    int maior = 0;
    int menor = 0;
    int soma_pares = 0;
    int quantidade_pares = 0;

    printf("Digite os números (0 para sair):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        soma += numero;
        quantidade++;

        if (quantidade == 1) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }

        if (numero % 2 == 0) {
            soma_pares += numero;
            quantidade_pares++;
        }
    }

    printf("Soma: %d\n", soma);
    printf("Quantidade: %d\n", quantidade);

    if (quantidade > 0) {
        float media = (float) soma / quantidade;
        printf("Média: %.2f\n", media);
    }

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    if (quantidade_pares > 0) {
        float media_pares = (float) soma_pares / quantidade_pares;
        printf("Média dos números pares: %.2f\n", media_pares);
    }

    return 0;
}
