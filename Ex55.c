/*55- Faça um programa que leia 10 números inteiros (positivos ou negativos). Imprima a média dos valores, ignorando os 
não positivos.*/

#include "stdio.h"

int main() {
    int numero, soma = 0, positivos = 0;
    float media;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%i", &numero);
        if (numero >= 0) {
            soma += numero;
            positivos++;
        }
    }

    media = (float)soma / positivos;
    printf("A media dos %i numeros positivos digitados eh: %.2f", positivos, media);

    return 0;
}
