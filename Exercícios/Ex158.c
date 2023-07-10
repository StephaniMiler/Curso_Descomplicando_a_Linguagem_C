/*158- Escreva um programa que leia 30 notas, calcule a média e exiba na tela a média
calculada e os alunos (índices, com as respectivas notas) que tiveram notas
acima da média da turma.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float notas[30];
    float soma = 0;
    float media;

    //Le as 30 notas
    for(int i=0; i<30; i++){
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma / 30;
    printf("\nMedia da turma: %f\n", media);

    //Verifica se o aluno tirou nota acima da media
    for(int i=0; i<30; i++){
        if(notas[i]> media){
            printf("\n O aluno %i ficou acima da media com nota %f.\n", i, notas[i]);
        }
    }

    return 0;
}