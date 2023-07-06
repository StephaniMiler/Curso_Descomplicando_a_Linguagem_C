/*97- Crie um programa que lê 6 valores inteiros pares. Caso seja digitado um valor ímpar, peça para que o usuário redigite um número. 
Uma vez preenchido com 6 valores pares, imprima na tela os valores lidos na ordem inversa.*/

#include <stdio.h>

int main() {
    int vetor[6];

    for (int i = 0; i < 6;) {
        printf("Digite o %dº número par: ", i + 1);
        scanf("%d", &vetor[i]);
        getchar();
        
        if (vetor[i] % 2 == 0) {
            i++;
        } else {
            printf("Digite apenas números pares!\n");
        }
    }

    printf("Valores na ordem inversa:\n");
    for (int j = 5; j >= 0; j--) {
        printf("%d\n", vetor[j]);
    }

    return 0;
}
