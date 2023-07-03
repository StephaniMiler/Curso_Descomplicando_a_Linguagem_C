/*59- Dado um número inteiro positivo, verificar se o número é primo ou não. OBS: Número primo é aquele que possui apenas 
dois divisores, o número 1 e o próprio número.*/

#include <stdio.h>

int main() {
    int numero;
    int divisores = 0;

    printf("Informe um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("O numero nao eh primo.\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("O numero eh primo.\n");
        } else {
            printf("O numero nao eh primo.\n");
        }
    }

    return 0;
}
