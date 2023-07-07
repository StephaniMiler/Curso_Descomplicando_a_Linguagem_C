/*125 - Escreva um programa que leia um número N de palavras e diga qual das palavras é a primeira e a 
última na ordem alfabética.*/

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    printf("Digite o número de palavras: ");
    scanf("%d", &N);

    char palavra[50];
    char primeiraPalavra[50], ultimaPalavra[50];

    printf("Digite a palavra 1: ");
    scanf("%s", primeiraPalavra);

    strcpy(ultimaPalavra, primeiraPalavra);

    for (int i = 2; i <= N; i++) {
        printf("Digite a palavra %d: ", i);
        scanf("%s", palavra);

        if (strcmp(palavra, primeiraPalavra) < 0)
            strcpy(primeiraPalavra, palavra);

        if (strcmp(palavra, ultimaPalavra) > 0)
            strcpy(ultimaPalavra, palavra);
    }

    printf("A primeira palavra em ordem alfabética é: %s\n", primeiraPalavra);
    printf("A última palavra em ordem alfabética é: %s\n", ultimaPalavra);

    return 0;
}
