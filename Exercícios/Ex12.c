/*12- Faça um algoritmo que leia (peça ao usuário digitar) o número total de prestações de um consórcio, o total 
de prestações pagas e o valor da prestação. O algoritmo deve calcular e apresentar o saldo devedor atual e a quantidade 
de prestações que faltam pagar.
Ex: O saldo devedor é de R$20000,00 e restam 20 prestações.*/

#include "stdio.h"
#include "math.h"

int main(){
     
    int valorTotal, totalPrestacoes, prestPagas, presFaltantes, valorPrest, saldoDevedor;

    printf("Insira a quantidade de prestacoes do consorcio: \n");
    scanf("%i", &totalPrestacoes);
    printf("Insira a quantidade de prestacoes pagas: \n");
    scanf("%i", &prestPagas);
    printf("Insira o valor da prestacao: \n");
    scanf("%i", &valorPrest);

    valorTotal = totalPrestacoes * valorPrest;
    presFaltantes = totalPrestacoes - prestPagas;
    saldoDevedor = valorTotal - (valorPrest * prestPagas);

    printf("O saldo devedor eh: %i\n", saldoDevedor);
    printf("A quantidade de parcelas em aberto eh: %i\n", presFaltantes);

}