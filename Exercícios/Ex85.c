/*85 -Escreva um programa que leia um número inteiro positivo e imprima todos os
números primos menores ou iguais a ele. Por exemplo, se o número lido for 10, a
saída deverá ser "2 3 5 7".*/

#include <stdio.h>

int verificarPrimo(int num) {
    int i;
    
    // Números menores ou iguais a 1 não são primos
    if (num <= 1) {
        return 0;
    }
    
    // Verifica se o número é divisível por algum número além de 1 e ele mesmo
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int numero, i;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    printf("Números primos menores ou iguais a %d: ", numero);
    
    for (i = 2; i <= numero; i++) {
        if (verificarPrimo(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}
