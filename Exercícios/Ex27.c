/*27-A prefeitura da cidade abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação 
não poderá ultrapassar 30% do salário bruto. Fazer um algoritmo que permita entrar com o salário bruto e o valor da 
prestação. Imprima se o empréstimo pode ou não ser concedido.*/

#include "stdio.h"

int main(){

    float prestacao, maxPrest;
    float salario;

    printf("Digite o seu salário bruto: \n");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao: \n");
    scanf("%f", &prestacao);

    maxPrest = salario * 0.3;

    if (prestacao <= maxPrest){
        printf("O emprestimo com prestacoes no valor de %f pode ser concedido!", prestacao);
    }
    else {
        printf("Que pena! O emprestimo com prestacoes no valor de %f nao pode ser concedido!", prestacao);
    }

    return 0;
}