/*36- Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer pesquisas 
para descobrir um bom plano, não muito caro. Um vendedor de plano de saúde apresentou a tabela a seguir:

• Até 10 anos – R$30,00
• Acima de 10 até 29 anos – R$60,00
• Acima de 29 até 45 anos – R$120,00
• Acima de 45 até 59 anos – R$150,00
• Acima de 59 até 65 anos – R$250,00
• Maior que 65 anos – R$400,00

Criar um algoritmo que entre com a idade de uma pessoa e imprimir o valor que ela deverá pagar.*/

#include "stdio.h"
int main(){

    int idade;

    printf("Digite a sua idade: \n");
    scanf("%i", &idade);

    if (idade <= 10){
        printf("O valor do plano eh R$30,00");
    }
    else if (idade <= 29){
        printf("O valor do plano eh R$60,00");
    }
    else if (idade <= 45){
        printf("O valor do plano eh R$120,00");
    }
    else if (idade <= 59){
        printf("O valor do plano eh R$150,00");
    }
    else if (idade <= 65){
        printf("O valor do plano eh R$250,00");
    }
    else {
        printf("O valor do plano eh R$400,00");
    }

    return 0;

}