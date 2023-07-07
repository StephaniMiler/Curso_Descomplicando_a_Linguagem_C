/*117- Digite um nome, calcule e retorne quantas letras tem esse nome*/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[30];
    int contador = 0;

    printf("Digite um nome: \n");
    fgets(nome, sizeof(nome), stdin);

    // Remover o caractere de nova linha (\n) do final do nome
    nome[strcspn(nome, "\n")] = '\0';

    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] != ' ') {
            contador++;
        }
    }

    printf("O nome '%s' tem %d letras.\n", nome, contador);

    return 0;
}
