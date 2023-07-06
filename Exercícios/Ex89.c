/*89- Faça um programa que leia uma sequência de números inteiros fornecidos pelo
usuário até que seja digitado um número igual ao anterior. O programa deve exibir a
quantidade de números digitados (excluindo o número repetido) e encerrar a
execução.*/

#include <stdio.h>

int main() {
    int numero, anterior, cont = 0;


    while (numero != anterior) {
        anterior = numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero != anterior) {
            cont++;
        }
    }

    printf("Quantidade de numeros digitados: %d\n", cont);

    return 0;
}
