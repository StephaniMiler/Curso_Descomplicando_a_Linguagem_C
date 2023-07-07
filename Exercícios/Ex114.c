/*114- Ler nome, e idade, se idade maior ou igual a 18 anos, imprime o nome da pessoa e a frase “deve votar”, caso 
contrário imprimir “Não é obrigado a votar”.*/

#include <stdio.h>

int main(){

    int idade;
    char nome[30];

    printf("Insira seu nome completo: ");
    fgets(nome, 30, stdin);
    printf("\nInsira a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("%s eh obrigado a votar.", nome);
    }
    else{
        printf("%s nao eh obrigado a votar.", nome);
    }

    return 0;
}