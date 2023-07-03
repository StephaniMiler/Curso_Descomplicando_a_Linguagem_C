/*44- Implemente um programa que leia o código do item pedido, a quantidade que deseja comprar e, calcule e 
imprima o valor a ser pago por aquele lanche.*/

#include <stdio.h>

int main() {
    int codigo;
    int quantidade;
    float valorTotal;

    printf("Cardápio da Lanchonete:\n");
    printf("1. Cachorro-quente - R$ 4.50\n");
    printf("2. Hambúrguer - R$ 6.00\n");
    printf("3. Cheeseburguer - R$ 7.00\n");
    printf("4. Refrigerante - R$ 3.50\n");
    printf("5. Suco - R$ 5.00\n");

    printf("Digite o código do item pedido: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 1:
            valorTotal = 4.50 * quantidade;
            printf("Valor total a ser pago: R$ %.2f\n", valorTotal);
            break;
        case 2:
            valorTotal = 6.00 * quantidade;
            printf("Valor total a ser pago: R$ %.2f\n", valorTotal);
            break;
        case 3:
            valorTotal = 7.00 * quantidade;
            printf("Valor total a ser pago: R$ %.2f\n", valorTotal);
            break;
        case 4:
            valorTotal = 3.50 * quantidade;
            printf("Valor total a ser pago: R$ %.2f\n", valorTotal);
            break;
        case 5:
            valorTotal = 5.00 * quantidade;
            printf("Valor total a ser pago: R$ %.2f\n", valorTotal);
            break;
        default:
            printf("Código inválido.\n");
            break;
    }

    return 0;
}
