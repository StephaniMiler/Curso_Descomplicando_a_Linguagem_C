/*50- Crie um programa que pede ao usuário dois números inteiros X E N. O programa deve imprimir os números de 0 até N. Porém, se o número de 
valores pares neste intervalo for maior que X, o programa deve ser encerrado*/

#include "stdio.h"
int main(){

    int n, x;

    printf("Digite o limite do intervalo: \n");
    scanf("%i", &n);
    
    getchar();

    printf("\nO numero de pares permitidos: \n");
    scanf("%i", &x);

    int conta_pares = 0;

    for(int i = 0; i<= n; i++){
        if(i % 2 == 0){
            conta_pares++;
        }
        if(conta_pares > x){
           break; 
        }
        else{
            printf("%i\n", i);
        }   
    }

}