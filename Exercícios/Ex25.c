/*25-Escreva um programa que peça 3 notas (reais) para o usuários. Imprima “voce passou”, caso a média das notas seja
maior ou igual a 7; caso contrário, imprima “voce nao passou”.*/

#include "stdio.h"

int main(){

    float nota1, nota2, nota3;
    float media;

    printf("Digite as 3 notas: \n");
    scanf("%f\n %f\n %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) /3;

    if(media >= 7){
        printf("Parabens! Sua media eh %f, voce passou!\n", media);
    }
    else{
        printf("Que pena! Sua media eh %f, voce nao passou!\n", media);
    }

    return 0;
}