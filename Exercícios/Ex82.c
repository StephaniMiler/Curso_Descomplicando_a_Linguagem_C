/*82- Escreva um programa completo em linguagem C que repita os seguintes passos para 10 alunos:
Leia a nota ponto flutuante e o número de faltas valor inteiro de um aluno e armazena em dois vetores um para notas e 
outro para faltas para cada aluno. 
Imprima a mensagem "reprovado" caso a nota seja menor que 5 ou se o número de faltas for maior que 16 caso contrário, 
imprima a mensagem "aprovado"*/

#include "stdio.h"

int main(){

    float nota[10];
    int faltas[10];

    for(int i= 0; i<10; i++){
        scanf("%f %i", &nota[i], &faltas[i]);
        if(nota[i] < 5 || faltas[i] >= 16){
            printf("REPROVADO\n");
        }
        else{
            printf("APROVADO!\n");
        }
    }
    return 0;
}