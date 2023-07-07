/*115- Crie uma programa que lê uma string e um caractere, e retorne o número de vezes que esse caractere aparece na 
string.*/

#include <stdio.h>

int main(){

    char mensagem[30];
    char caractere;
    int contador = 0;

    printf("Digite uma mensagem: ");
    fgets(mensagem, 30, stdin);
    printf("\n Digite um caractere: ");
    scanf("%c", &caractere);

    for(int i=0; i<= 29; i++){
        if(mensagem[i] == caractere){
        contador ++;}
    }

    printf("O caractere '%c' apareceu %i vezes na mensagem digitada.", caractere, contador);

    return 0;

}