/*124- Escreva um programa que recebe uma string S e inteiros não-negativos I e J. 
Concatene a frase "Ola mundo" com o segmento S[I..J]. Imprima o texto concatenado.*/

#include <stdio.h>
#include <string.h>

int main(){

    char S[20];
    char IJ[5];

    printf("Digite uma palavra: ");
    fgets(S, 20, stdin);
    printf("Digite dois numeros inteiros: \n");
    fgets(IJ, 5, stdin);

    strcat(S, IJ);
  
    printf("Resultado final: %s", S);

    return 0;
}