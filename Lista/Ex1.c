/*1- Escreva um programa que imprima o seguinte padrão utilizando loops:
A 
AB 
ABC 
ABCD 
ABCDE
*/

#include <stdio.h>

int main() {
    int linhas = 5; // Número de linhas do padrão

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j); // Imprime os caracteres de 'A' até 'A' + j
        }
        printf("\n"); // Pula para a próxima linha após imprimir os caracteres
    }

    return 0;
}
