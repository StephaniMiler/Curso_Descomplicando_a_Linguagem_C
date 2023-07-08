/*131- Escrever um programa que define e inicializa aletoriamente duas matrizes de tamanho 6x6 de inteiros positivos 
estritamente menores que 10. Fazer a computação da soma em uma terceira matriz. Imprimir na tela as três matrizes*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
  srand(time(NULL));
  
  int matriz1[6][6], matriz2[6][6];
  
  int matriz3[6][6];
  
  /*Preenchendo a primeira e segunda matriz*/
  for(int linha = 0; linha < 6; linha++)
  {
    for(int coluna = 0; coluna < 6; coluna++)
    {
      matriz1[linha][coluna] = rand()%10;
      matriz2[linha][coluna] = rand()%10;
      
      //Atribuir a soma de elemento da matriz1 e da matriz2
      matriz3[linha][coluna] = matriz1[linha][coluna] + matriz2[linha][coluna];
    }
  }
  
  /*Impressao da matriz1*/
  for(int linha = 0; linha < 6; linha++)
  {
    for(int coluna = 0; coluna < 6; coluna++)
    {
      printf("%i ", matriz1[linha][coluna]);
    }
    printf("\n");
  }
  
  printf("\n\n");
  
  /*Impressao da matriz2*/
  for(int linha = 0; linha < 6; linha++)
  {
    for(int coluna = 0; coluna < 6; coluna++)
    {
      printf("%i ", matriz2[linha][coluna]);
    }
    printf("\n");
  }
  
  printf("\n\n");
  
  /*Impressao da matriz3*/
  for(int linha = 0; linha < 6; linha++)
  {
    for(int coluna = 0; coluna < 6; coluna++)
    {
      printf("%i ", matriz3[linha][coluna]);
    }
    printf("\n");
  }
}
