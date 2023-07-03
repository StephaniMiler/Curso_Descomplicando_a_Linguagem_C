/*54- Faça um programa que simula o lançamento de dois dados, d1 e d2 com valores aleatórios entre 1 e 6, n vezes 
(fornecido pelo usuário) e tem como saída o número de cada dado e a relação entre eles (>,<=) de cada lançamento*/

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){
  srand(time(NULL));

  int lancamentos;

  printf("Digite a quantidade de lançamentos: ");
  scanf("%i", &lancamentos);

  for(int i= 1; i <= lancamentos; i++){
    int d1, d2;
    d1 = 1 + rand() % 6;
    d2 = 1 + rand() % 6;

    if(d1 == d2){
        printf("Lancamento %i: %i == %i ", i, d1, d2);
    }
    else if(d1 > d2){
        printf("Lancamento %i: %i > %i ", i, d1, d2);
    }
    else{
        printf("Lancamento %i: %i < %i ", i, d1, d2);
    }
  }

  return 0;  

}