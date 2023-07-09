/*143- Exemplo de Struct*/

#include <stdio.h>

int main(){

    struct ficha_aluno{
        char nome[40];
        int numero;
        float nota;
    };

    struct ficha_aluno aluno;

    printf("\n----Cadastro de aluno----\n");
    printf("\nNome do aluno: ");
    fgets(aluno.nome, 40, stdin);
    printf("\nNumero do aluno: ");
    scanf("%d", &aluno.numero); 
    printf("\nNota do aluno: ");
    scanf("%f", &aluno.nota);

    //Imprimindo a struct
    printf("\n----Ficha do Aluno----\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Numero: %d\n", aluno.numero);
    printf("Nota: %.2f\n", aluno.nota);

    return 0;

}