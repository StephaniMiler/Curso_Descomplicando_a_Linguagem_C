/*154- Exemplo função malloc()*/

//A função malloc é responsável por pedir ao sistema operacional um bloco de memória do tamanho solicitado
//Sizeof: operador que traz a quantidade de bytes de um tipo de dado
//Se for um vetor tipo int de 10 posicoes: malloc(10* sizeof(int));
#include <stdio.h>
#include <stdlib.h>

int main(){

    //Vai retornar o ponteiro que aponta para o endereço do bloco alocado pela malloc
    int *ponteiro = (int*)/*força o ponteiro retornar um int*/malloc(sizeof(int)); //memory allocation traduzindo alocação de memória
                                         //sizeof vem com int como parametro, pois é o tipo da variavel ponteiro

    //Verifica se a alocação de memória funcionou:
    if(ponteiro == NULL){
        printf('malloc nao funcionou!');
        return 1;
    }

    //Acessar e colocar um valor no endereço de memória gerado acima:
    *ponteiro = 1000;

    printf("%d", *ponteiro);

    return 0;
}