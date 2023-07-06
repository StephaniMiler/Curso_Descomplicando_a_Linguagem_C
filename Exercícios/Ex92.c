/*92- Escreva um programa em linguagem C que leia as idades (valor inteiro) de 8
pessoas e armazene em um vetor. Em seguida, verifique e imprima quantas dessas
pessoas são maiores de idade (idade igual ou superior a 18 anos).*/

#include "stdio.h"

int main(){

    int idade[8], contador = 0;

    for(int i=0; i<8; i++){
        printf("Digite a sua idade: ");
        scanf("%d", &idade[i]);
        if(idade[i] >= 18){
            contador++;
        }
    }

    printf("Dentre as 8 pessoas listadas, %d tem mais de 18 anos.", contador);

    return 0;
}