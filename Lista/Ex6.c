/*6- Escreva uma função em linguagem C chamada "encontrarMaiorElemento" que encontre e retorne o 
maior elemento em uma matriz de inteiros. A função deve receber como parâmetros a matriz, com 
dimensões 5x5, e retornar o valor inteiro do maior elemento encontrado.
Dica: Percorra todos os elementos da matriz e compare cada um deles com um valor inicialmente 
definido como o menor número inteiro possível. Caso um elemento seja maior do que o valor atual 
do maior elemento, atualize o valor do maior elemento encontrado.
Escreva o código da função "encontrarMaiorElemento" e um exemplo de uso dessa função em um 
programa principal (função main) para encontrar o maior elemento em uma matriz específica e 
exibir o resultado na tela.
*/

#include <stdio.h>
#include <limits.h>

int encontrarMaiorElemento(int matriz[5][5]) {
    int maior = INT_MIN; // Define o maior como o menor valor possível

    // Percorre todos os elementos da matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // Compara o elemento atual com o maior encontrado até agora
            if (matriz[i][j] > maior) {
                maior = matriz[i][j]; // Atualiza o maior elemento encontrado
            }
        }
    }

    return maior; // Retorna o maior elemento
}

int main() {
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int maiorElemento = encontrarMaiorElemento(matriz);

    printf("O maior elemento da matriz é: %d\n", maiorElemento);

    return 0;
}
