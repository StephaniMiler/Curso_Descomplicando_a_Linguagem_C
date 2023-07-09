/*145- Escreva uma função que calcule e retorne a média dos elementos em uma determinada linha de uma matriz de números 
reais. Esta função recebe como parâmetros a matriz, de 10 linhas e 5 colunas, e o índice da linha que deve ter a sua 
média calculada. O resultado deve ser retornado como um número em ponto flutuante. Atenção: não é necessário apresentar 
o código da função main().
*/

#include <stdio.h>

float CalculaMedia(float matriz[10][5], int i){

    float soma = 0;
    float media;


    for(int j=0; j<5; j++){
       soma = soma + matriz[i][j];
    }

    media = soma / 5;

    return media;
}


