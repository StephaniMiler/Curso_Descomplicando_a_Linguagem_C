/*1- Escreva um único programa que realize os seguinte passos:
-Leia uma cadeia de caracteres do teclado, de no máximo 60 caracteres “úteis” e armazene em uma 
variável. Atenção, essa string pode conter espaços em branco.
-Calcule, armazene em uma variável e imprima o número de caracteres dessa string.
Imprima na tela os caracteres da string na forma inversa. 
Ex: Entrada: 
abacaxi. 
Saida: 7 
ixacaba.
*/
#include <stdio.h>
#include <string.h>

int main(){

    char frase[61];
    int tamanho;

    printf("Digite uma frase: \n");
    fgets(frase, 61, stdin);
    
    tamanho = strlen(frase) -1;

    printf("%i\n", tamanho);
    for(int i= tamanho; i>=0; i--){
        printf("%c", frase[i]);
    }

    return 0;
    
}
