/*163- Escreva um programa que leia uma string qualquer (máximo 80 caracteres) e retorne o número
total de caracteres contidos nessa string. Não use a função strlen().
*/

#include <stdio.h>

int main() {
    char nome[81]; 

    printf("Digite um nome: ");
    fgets(nome, 81, stdin);

    int total = 0;

    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] != '\n') {
            total++;
        }
    }

    printf("%d\n", total);

    return 0;
}
