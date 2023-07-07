/*127- Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N. Concatene a 
str2 N vezes com str1.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    int N;

    printf("Digite a primeira string (str1): ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string (str2): ");
    fgets(str2, sizeof(str2), stdin);

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    // Remover o caractere de nova linha ('\n')
    if (str1[strlen(str1) - 1] == '\n')
        str1[strlen(str1) - 1] = '\0';

    if (str2[strlen(str2) - 1] == '\n')
        str2[strlen(str2) - 1] = '\0';

    // Concatenar str2 N vezes com str1
    char resultado[100] = "";
    for (int i = 0; i < N; i++) {
        strcat(resultado, str2);
    }
    strcat(resultado, str1);

    printf("Resultado da concatenação: %s\n", resultado);

    return 0;
}
