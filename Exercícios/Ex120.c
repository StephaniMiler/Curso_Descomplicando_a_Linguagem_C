/*120- Crie um programa que pede ao usuário o tamanho do texto que deseja digitar. Em seguida, o programa pede ao usuário 
que digite um texto. O programa deve transformar alguns dos caracteres em maiúsculos, outros em minúsculos e outros 
permanecem como estão. Para isso, você deve navegar por cada caracter do texto, e gerar um número aleatório 0 ou 1. 
Se o número gerado for 0, o caracter atual é convertido para minúsculo, se o número for 1, o caracter é convertido para 
maiúsculo. Imprima o texto resultante.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main() {
    int tamanho;
    printf("Digite o tamanho do texto: ");
    scanf("%d", &tamanho);

    char *texto = (char *) malloc((tamanho + 1) * sizeof(char));
    printf("Digite o texto: ");
    scanf(" %[^\n]s", texto);

    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        int aleatorio = rand() % 2;
        if (aleatorio == 0) {
            texto[i] = tolower(texto[i]);
        } else {
            texto[i] = toupper(texto[i]);
        }
    }

    printf("Texto transformado: %s\n", texto);

    free(texto);

    return 0;
}
