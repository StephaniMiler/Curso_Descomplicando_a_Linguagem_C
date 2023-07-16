/*5- Escreva um programa completo (em linguagem C) que repita os seguintes passos para dez alunos.
a) Leia a nota (valor em ponto flutuante) e o número de faltas (valor inteiro) de um aluno e os 
armatene em dois vetores (um para notas e outro para faltas);
b) Para cada aluno, imprima a mensagem "Reprovado" caso a nota seja menor que 5 ou o numero de 
faltas seja maior ou igual a 16, Caso contrário, imprima a mensagem "Aprovado*/

#include <stdio.h>

int main(){

    float notas[10];
    int faltas[10];

    for(int i= 0; i<10; i++){
        printf("\nDigite a nota e a quantidade de faltas do aluno %d: ", i);
        scanf("%f %d", &notas[i], &faltas[i]);
        if(notas[i] < 5 || faltas[i] >= 16){
            printf("Aluno %d esta reprovado!", i);
        }
        else{
            printf("Aluno %d esta aprovado!", i);
        }
    }

    return 0;
}