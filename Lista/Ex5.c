/*5- Escreva um programa em linguagem C que leia uma palavra do teclado e conte o número de 
vogais nessa palavra. Em seguida, imprima o número de vogais e a palavra invertida.*/

#include <stdio.h>
int main(){

    char palavra[20];
    int tamanho;
    int vogais = 0;

    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);

    tamanho = strlen(palavra) - 1 ;

    for(int i= 0; i<tamanho; i++){
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            vogais++;
        }    
    }

    printf("A palavra %s contem %d vogais.", palavra, vogais);

}