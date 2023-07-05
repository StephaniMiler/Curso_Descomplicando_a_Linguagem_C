/*77- Crie um programa que desenhe a diagonal principal e a diagonal secundária do quadrado (o tamanho do quadrado deve ser fornecido pelo usuário), como a seguir:
Exemplo do quadrado com tamanho 5 (5 linhas e 5 colunas).
*/

#include <stdio.h>

int main() {
    int tamanho;

    // Obter o tamanho do quadrado do usuário
    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &tamanho);

    // Desenhar o quadrado com a diagonal principal e diagonal secundária
    for (int linha = 0; linha < tamanho; linha++) {
        for (int coluna = 0; coluna < tamanho; coluna++) {
            // Verificar se está na diagonal principal ou diagonal secundária
            if (linha == coluna || linha == tamanho - coluna - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
