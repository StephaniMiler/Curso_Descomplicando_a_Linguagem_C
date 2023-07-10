/*159- Escreva um programa que leia 20 notas, armazene-as em um vetor e então diga se uma 
determinada nota x digitada pelo usuário existe no vetor. O programa deve repetir o procedimento 
de leitura de x e busca de x no vetor até que o usuário digite um valor negativo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float notas[5];
    float valor;
    int encontrado;

    for(int i=0; i<5; i++){
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &notas[i]);
    }

    //Pede um valor ao usuário
    printf("digite o valor a ser procurado: ");
    scanf("%f", &valor);

    //Procura o valor digitado
    for(int i=0; i<5; i++){
        if(notas[i] == valor){
            encontrado = i;
            break;
        }
        else{
            encontrado = 0;
        }
    }

    if(encontrado !=0){
        printf("Valor %.2f encontrado na posicao %d", valor, encontrado);
    }
    else{
        printf("Valor nao encontrado!"); 
    }
    return 0;

}