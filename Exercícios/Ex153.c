/*153- Introdução alocação dinâmica*/

//Malloc, calloc, realloc e free
//Sizeof

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;
    double y;
    int vetor[10];

    //Calcula o tamanho de um tipo de dado (sizeof)
    printf("%i\n", sizeof(x)); //imprime o tamanho da variavel x
    printf("%i\n", sizeof(y)); //tamanho de y
    printf("%i\n", sizeof(vetor)); //tamanho do vetor

    return 0;
}
