/*166- Faça um programa que teste se uma palavra é um palíndromo, ou seja, se ela pode ser lida 
da mesma forma tanto na ordem correta quanto na ordem invertida. Ex.: arara, ovo, omo.*/

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[15];
    char p_inversa[15];

    printf("Digite uma palavra:\n");
    fgets(palavra, 15, stdin);

    int len = strlen(palavra);
    int j = 0;
    for (int i = len - 1; i >= 0; i--) {
        p_inversa[j++] = palavra[i];
    }
    p_inversa[j] = '\0'; // Adiciona o caractere nulo ao final da palavra invertida

    // Remove o caractere de nova linha ('\n') das strings
    palavra[strcspn(palavra, "\n")] = '\0';
    p_inversa[strcspn(p_inversa, "\n")] = '\0';

    if (strcmp(palavra, p_inversa) == 0) {
        printf("Eh um palindromo.\n");
    } else {
        printf("Nao eh um palindromo.\n");
    }

    return 0;
}
