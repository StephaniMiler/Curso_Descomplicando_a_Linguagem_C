/*122- Fazer um programa que:
(a) leia uma frase de 80 caracteres, incluindo brancos,
(b) conte e imprima quantos brancos existem na frase,
(c) conte e imprima quantas vezes a letra ‘a’ aparece,
(d) substitua as vogais pelo caracter ‘X’.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[81];
    int brancos = 0;
    int letra_a = 0;

    printf("Digite uma frase (até 80 caracteres): ");
    fgets(frase, 81, stdin);

    // Contagem de brancos e letras 'a'
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            brancos++;
        }
        if (tolower(frase[i]) == 'a') {
            letra_a++;
        }
        if (tolower(frase[i]) == 'a' || tolower(frase[i]) == 'e' || tolower(frase[i]) == 'i' ||
            tolower(frase[i]) == 'o' || tolower(frase[i]) == 'u') {
            frase[i] = 'X';
        }
    }

    printf("Número de brancos: %d\n", brancos);
    printf("Número de letras 'a': %d\n", letra_a);
    printf("Frase com vogais substituídas por 'X': %s\n", frase);

    return 0;
}
