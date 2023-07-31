/*3- Escreva um programa que leia um número inteiro positivo e verifique se ele é um número 
perfeito. Um número perfeito é aquele cuja soma de todos os seus divisores (exceto ele mesmo) é 
igual a ele.*/

#include <stdio.h>

int main() {
    int numero, somaDivisores = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero <= 0) {
        printf("O número digitado não é um número inteiro positivo.\n");
        return 0;
    }

    // Calcula a soma dos divisores do número
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    // Verifica se a soma dos divisores é igual ao número
    if (somaDivisores == numero) {
        printf("O número %d é um número perfeito.\n", numero);
    } else {
        printf("O número %d não é um número perfeito.\n", numero);
    }

    return 0;
}
