/*26- Uma empresa deseja dar 20% de aumento para aqueles funcionários que possuem salário menor ou igual a R$1000,00 e 
um aumento de 10% para aqueles que possuem salários maiores que R$1000,00. Escreva um programa que pede para o usuário 
digitar o seu salário. Imprima seu novo salário na tela.*/

#include "stdio.h"

int main(){
    
    float salario;
    float salarioNovo;

    printf("Digite o seu salario: \n");
    scanf("%f", &salario);

    if (salario <= 1000){
        salarioNovo = salario + ((salario/100) * 20);
    }
    else{
        salarioNovo = salario + ((salario/100)* 10);
    }

    printf("O novo salario eh: %f", salarioNovo);

    return 0;
}