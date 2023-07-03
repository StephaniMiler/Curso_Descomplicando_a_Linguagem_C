/*56- Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele
próprio. Ex: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.*/

#include <stdio.h>

int main() {
    int numero, divisores = 0;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            divisores += i;
        }
    }

    printf("A soma dos divisores de %i eh: %i", numero, divisores);
    return 0;
}
