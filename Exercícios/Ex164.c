/*164 Escreva um programa que leia uma string qualquer (máximo 80
caracteres) e retorne o número total de caracteres contidos nessa
string. Use a função strlen()*/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[81]; 

    printf("Digite um nome: ");
    fgets(nome, 81, stdin);

    int total = 0;

    for (int i = 0; i<strlen(nome); i++) {
        if (nome[i] != '\n') {
            total++;
        }
    }

    printf("%d\n", total);

    return 0;
}
