/*75- Usando apenas os comandos printf("0"), printf("*") e printf("\n") e usando laços aninhados, faça o seguinte aparecer na tela.

xxxxx
0xxxx
00xxx
000xx
0000x
00000*/

#include <stdio.h>

int main() {
    int linhas = 6;
    int colunas = 5;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (j < i) {
                printf("0");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
