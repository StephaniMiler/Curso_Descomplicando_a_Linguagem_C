/*49- Crie um programa que lê um número inteiro relativo ao número de alunos de uma turma. Deve ser digitada uma nota para
cada aluno, e ao final do programa, informar a média das notas digitadas.*/

#include "stdio.h"
int main(){

    int numero, i;
    float nota, media, soma;

    soma = 0.0;

    printf("Digite a quantidade de alunos\n");
    scanf("%i", &numero);

    for(i = 1; i <= numero; i++){
        printf("Digite a nota do aluno %i: \n ", i);
        scanf("%f", &nota);
        soma += nota;
    }
    media = soma / numero;

    printf("A MEDIA DA TURMA EH: %f", media);
}