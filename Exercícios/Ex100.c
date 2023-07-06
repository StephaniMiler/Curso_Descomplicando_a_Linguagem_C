/*100- Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números negativos e 
a soma dos números positivos desse vetor.*/

#include <stdio.h>

int main(){

    float vetor[10];
    int negativos =0;
    float soma =0;

    for(int i= 0; i<=9; i++){
        printf("Digite o numero da %i posicao: ", i + 1);
        scanf("%f", &vetor[i]);
        getchar();
        
        if(vetor[i]<0){
            negativos++;
        }
        else{
            soma = soma + vetor[i];
        }

    }

    printf("A quantidade de numeros negativos: %d\n", negativos);
    printf("A soma dos positivos: %.2f", soma);

    return 0;
}