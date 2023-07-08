/*136- Preencha uma matriz 5 x 5 com valores aleatórios entre 0 e 100. Em seguida, leia um valor X. O programa deverá 
fazer uma busca por este valor na matriz e, ao final, escrever a localização (linha e coluna), caso a primeira instância 
desse valor seja encontrado. Caso não seja encontrado, imprimir a mensagem “nao encontrado”.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int matriz[5][5];
    int valor;


    for(int linha = 0; linha <5; linha++){
        for(int coluna =0; coluna <5; coluna++){
            matriz[linha][coluna] = rand() % 101;
        }
    }

    printf("\n Digite um valor entre 0 e 100: ");
    scanf("%i", &valor);

    int linhaEncontrada = -1;
    int colunaEncontrada = -1;

    for(int linha = 0; linha < 5; linha++){
        for(int coluna = 0; coluna < 5; coluna++){
            if (matriz[linha][coluna] == valor){
                linhaEncontrada = linha;
                colunaEncontrada = coluna;
                break;  
            }
        }
    }
        
    if (linhaEncontrada != -1 && colunaEncontrada != -1){
        printf("O valor %i foi encontrado na linha %i, coluna %i\n", valor, linhaEncontrada, colunaEncontrada);
    }
    else{
        printf("Valor nao encontrado\n");
    }


    return 0;
}