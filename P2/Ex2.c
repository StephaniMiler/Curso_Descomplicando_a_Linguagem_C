/*2- Escreva uma função que calcule e retorne a média dos elementos em uma determinada linha de 
uma matriz de números reais. Esta função recebe como parâmetros a matriz, de 10 linhas e 5 
colunas, e o índice da linha que deve ter a sua média calculada. O resultado deve ser retornado 
como um número em ponto flutuante. Atenção: não é necessário apresentar o código da função 
main().*/

#include <stdio.h>

float calculaMedia(float matriz[10][5], int linha){

    float soma=0;
    float media;

    for(int coluna=0; coluna<5; coluna++){
        soma = soma + matriz[linha][coluna];
    }

    media = soma / 5;

    return media;
}

    
