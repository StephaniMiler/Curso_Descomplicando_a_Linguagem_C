/*40- Escrever um programa que gerencia um caixa eletrônico de banco. O sistema deve imprimir um menu:
1 - Saldo em conta corrente
2 - extrato bancário
3 -Sacar dinheiro
4- Transferência
5- Opcao invalida*/

#include "stdio.h"
int main(){

    int opcao;

    printf("Digite a opcao: \n");
    printf("1- Saldo em conta corrente\n");
    printf("2 -Extrato bancario\n");
    printf("3 -Sacar dinheiro\n");
    printf("4- Transferencia\n");
    printf("5- Opcao invalida\n");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Voce selecionou SALDO");
        break;
    case 2:
        printf("Voce selecionou EXTRATO");
        break;
    case 3:
        printf("Voce selecionou SAQUE");
        break;
    case 4:
        printf("Voce selecionou TRANSFERENCIA");
        break;
    default:
        printf("Opcao invalida!");
        break;
    }

    return 0;

}