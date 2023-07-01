/*24- Entrar com sexo (caracter ‘m’ para masculino e ‘f’ para feminino) e idade de uma pessoa. Se a pessoa for do sexo 
feminino e tiver menos de 25 anos, imprimir a mensagem: ACEITA. Caso contrário, imprimir a mensagem: NÃO ACEITA.*/

#include "stdio.h"

int main(){

    char sexo;
    int idade;

    printf("Digite a sua idade: \n");
    scanf("%i", &idade);
    printf("Digite o seu sexo (m/f): \n");
    scanf(" %c", &sexo);

    if (sexo == 'f' && idade <= 25){
        printf("Aceita!");
    }
    else {
        printf("Nao aceita!");
    }

    return 0;
}