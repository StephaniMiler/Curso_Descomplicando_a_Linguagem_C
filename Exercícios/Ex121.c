/*121- Crie um programa que compara duas strings. Imprima ‘Eh igual’, se o valor das duas strings for igual. 
Caso contrário, imprima “Nao eh igual”.*/

#include <stdio.h>
#include <string.h>

int main() {
    char mensagem[20];
    char mensagem2[20];

    printf("Digite uma mensagem: ");
    fgets(mensagem, 20, stdin);
    printf("Digite outra mensagem: ");
    fgets(mensagem2, 20, stdin);

    if (strcmp(mensagem, mensagem2) == 0) {
        printf("Eh igual!\n");
    } else {
        printf("Nao eh igual!\n");
    }

    return 0;
}
