/*70- Faça um programa que recebe um número inteiro positivo e imprime o fatorial deste número.
Lembrando que 4! (fatorial de 4) é 4x3x2x1 = 24*/

#include <stdio.h>

int main() {
    int numero, i;
    long long fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: O número deve ser positivo.\n");
        return 0;
    }

    for (i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é: %lld\n", numero, fatorial);

    return 0;
}
