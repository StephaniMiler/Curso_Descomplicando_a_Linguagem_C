/*160- Uma determinada loja comercializa 10 produtos diferentes. Escreva um programa que receba 
a quantidade vendida e o valor unitário de cada produto e os armazene em dois vetores. Após a 
leitura, o programa deve calcular o total de produtos vendidos e o faturamento total da loja, e 
exibi-los na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int quantidade[10];
    float valor_unitario[10];
    int soma = 0;
    float lucro = 0;
    float lucro_final = 0;

    for(int i= 0; i<10; i++){
        printf("Digite a quantidade vendida e o valor do produto: ");
        scanf("%d %f", &quantidade[i], &valor_unitario[i]);
        soma = soma + quantidade[i];
        lucro = valor_unitario[i] * quantidade[i];
        lucro_final = lucro_final + lucro;

    }

    printf("\nQuantidade de produtos vendidos: %d\n", soma);
    printf("Lucro da loja: %.2f", lucro_final);

    return 0;
}