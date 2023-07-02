/*35- Um hotel cobra R$50,00 reais a diária e mais uma taxa de serviços. A taxa de serviços é de:
• 15,30 por dia, se número de diárias <15
• 10,00 por dia, se número de diárias =15
• 8,50 por dia, se número de diárias >15
Faça um programa que lê a quantidade de dias que o hóspede ficou no hotel e imprime o valor total a pagar.*/

#include "stdio.h"
int main(){

    int dias;
    float valor;

    printf("Digite a quantidade de dias de hospedagem: \n");
    scanf("%i", &dias);

    if(dias < 15){
        valor = (dias * 50) + (15.30 * dias);
        printf("O valor total da hospedagem eh: R$  %.2f", valor);
    }
    else if (dias == 15){
        valor = (dias * 50) + (10 * dias);
        printf("O valor total da hospedagem eh: R$  %.2f", valor);
    }
    else {
        valor = (dias * 50) + (8.50 * dias);
        printf("O valor total da hospedagem eh: R$  %.2f", valor);
    }

    return 0;
}