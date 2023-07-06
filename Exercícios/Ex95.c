/*95- Leia um vetor de 10 posições e atribua o valor 0 para todos os elementos que possuírem valores negativos*/

#include <stdio.h>
int main(){

    int vetor[10];

    for(int i= 0; i<=9; i++){
        printf("Digite o valor da %d posicao: ", i + 1);
        scanf("%d", &vetor[i]);
        getchar();

        if(vetor[i] < 0){
            vetor[i] = 0;
        }
    }

    for(int j= 0; j <=9; j++){
        printf("%d\n", vetor[j]);
    }

    return 0;
}