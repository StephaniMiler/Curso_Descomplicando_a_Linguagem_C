/*64- Criar um programa que apresenta o seguinte menu:
BOAS VINDAS:
1– Imprimir “Olá!”;
2– Imprimir “Bem vindo!”;
3– Sair do algoritmo;
Se o usuário digitar a opção 1 ou 2, a respectiva mensagem é impressa. Em seguida, o menu é impresso novamente para que o 
usuário faça uma nova escolha. O programa só é encerrado quando o usuário digitar 3 para sair.*/

#include "stdio.h"

int main(){

    int opcao = 1;

    while (opcao == 1 || opcao ==2)
    {
    printf("\nBOAS VINDAS: \n");
    printf("Digite 1: Imprimir Ola!\n");
    printf("Digite 2: Imprimir Bem vindo!\n");
    printf("Digite 3: Sair do algoritmo\n");

    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1: printf("Ola!\n");
        break;
    case 2: printf("Bem vindo!\n");
        break;
    case 3: break;
    default:
        break;
    }
        
    }
     
    return 0;

}