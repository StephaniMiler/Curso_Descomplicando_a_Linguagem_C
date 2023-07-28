/*2- Escreva um programa em linguagem C que leia as notas (ponto flutuante) de uma turma de 5 
alunos e armazene em um vetor. Em seguida, calcule e imprima a maior e a menor nota da turma.
*/

#include <stdio.h>

int main(){

    float notas[5];
    float maior = 0;
    float menor = 10;

    for(int i=0; i<5; i++){
        printf("Digite a nota do aluno %i: ", i+1);
        scanf("%f", &notas[i]);
        if(notas[i] > maior){
            maior = notas[i];
        }
        if(notas[i]<menor){
            menor = notas[i];
        }
    }

    printf("A maior nota foi: %.2f. E a menor nota foi: %.2f", maior, menor);
    
    return 0;
}