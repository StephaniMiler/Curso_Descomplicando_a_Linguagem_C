/*116- Crie um programa que recebe uma string e um caractere, e apague (substitua por ‘ ’ (espaço)) todas as ocorrências 
desse caractere na string. */

#include <stdio.h>

void substituirCaractere(char *str, char ch) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            str[i] = ' ';
        }
        i++;
    }
}

int main() {
    char str[100];
    char ch;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    printf("Digite o caractere a ser substituído: ");
    scanf("%c", &ch);

    substituirCaractere(str, ch);

    printf("String após a substituição: %s\n", str);

    return 0;
}
