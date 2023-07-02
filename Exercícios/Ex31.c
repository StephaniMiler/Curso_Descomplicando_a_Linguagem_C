/*31- Crie um programa que recebe uma nota entre 0.0 e 10.0 e checa se o aluno passou direto, ficou de recuperação ou 
foi reprovado.
A regra é a seguinte:
*7 ou mais: passou direto
*Entre 4 e 7: recuperação
*Abaixo de 4: reprovado*/

#include "stdio.h"

int main(){

    float nota;

    printf("Insira a sua nota: \n");
    scanf("%f", &nota);

    if (nota >= 7){
        printf("Parabens!! Voce foi aprovado!");
    }
    else if (nota >= 4 && nota < 7){
        printf("Voce esta de recuperacao!");
    }
    else{
        printf("Que pena! Voce reprovou!");
    }

    return 0;
}