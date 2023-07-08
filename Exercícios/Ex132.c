/*132- Uma escola fez uma pesquisa com uma amostra de 10 pais. Nesta pesquisa foram coletados dados sobre o salário dos 
entrevistados, a idade e o número de filhos. Estas informações devem ser armazenadas em uma matriz chamada MAT (3 x 10) 
de números reais, na qual a primeira linha corresponde ao salário, a segunda linha corresponde a idade e a terceira linha 
ao número de filhos de cada um dos entrevistados. Faça um programa em C para obter as seguintes informações a partir 
desta amostra:

a) Coletar os dados dos entrevistados. Eles devem ser fornecidos pelo usuário e a matriz MAT vazia, deverá armazenar os 
dados dos entrevistados: 
b) Calcular a média salarial, a idade média e a quantidade média de filhos da amostra de todos os pais. 
A informação deve ser impressa da seguinte forma: "O pai 1 tem X anos, Y filhos e recebe RS X reais. Cada impressão por 
linha. 
c) Imprimir aqueles pals que possuem a maior e a menor idade da amostra.*/

#include "stdio.h"
#include<limits.h>

void main() 
{
  int n_pais = 3;
  
  float MAT[3][n_pais];//Diz respeito as informacoes da amostra de pais
  
  /*Preenchimento da matriz com informacoes dos pais*/
  for(int linha = 0; linha < 3; linha++)
  {
    if(linha == 0)
    {
      printf("**Digite os salarios dos pais**\n");
    }
    else if(linha == 1)
    {
      printf("**Digite as idades dos pais**\n");
    }
    else if(linha == 2)
    {
      printf("**Digite o numero de filhos de cada um dos pais**\n");
    }
    
    for(int coluna = 0; coluna < n_pais; coluna++)
    {
      printf("\nDigite a informacao do pai %i: ", coluna);
      scanf("%f", &MAT[linha][coluna]);
    }
    
    printf("\n\n");
  }
  
  
  float soma_salario = 0;
  float soma_idade = 0;
  float soma_filhos = 0;
  
  int menor_idade = INT_MAX;
  int maior_idade = INT_MIN; 
  
  /*Imprimir os valores de cada coluna por linha*/
  
  printf("\n");
  for(int coluna = 0; coluna < n_pais; coluna++)
  {
    printf("O pai %i possui %.1f anos, %.1f filhos e um salario de %.2f reais.\n", coluna, MAT[1][coluna], MAT[2][coluna], MAT[0][coluna]);
    
    soma_salario += MAT[0][coluna];
    soma_idade += MAT[1][coluna];
    soma_filhos += MAT[2][coluna];
    
    /*Atualiza a menor e maior idade*/
    if(MAT[1][coluna] < menor_idade)
    {
      menor_idade = MAT[1][coluna];
    }
    
    if(MAT[1][coluna] > maior_idade)
    {
      maior_idade = MAT[1][coluna];
    }
  }
  
  printf("\n%f eh a media de salario dos pais, %.1f eh a media de idade e %.1f eh a media de filhos.", soma_salario/n_pais, soma_idade/n_pais, soma_filhos/n_pais);
  
  printf("\n%i eh a maior idade e %i eh a menor idade.", maior_idade, menor_idade);
}