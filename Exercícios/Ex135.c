/*135- Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/

#include <stdio.h>

int main(){

    int matriz[4][4];
    int contador = 0;

    for(int linha=0; linha< 4; linha ++){
        for(int coluna =0; coluna<4; coluna++){
            printf("\nDigite o %io valor da %ia linha: ", coluna +1, linha+1);
            scanf("%i", &matriz[linha][coluna]);
            getchar();

            if(matriz[linha][coluna] > 10){
                contador++;
            }
        }
        printf("\n");
    }

    //Imprimindo a matriz
    printf("\n***Matriz***\n");
    for(int linha=0; linha< 4; linha ++){
        for(int coluna =0; coluna<4; coluna++){
            printf("%i ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n Quantidade de numeros maiores que 10: %i", contador);

    return 0;
}