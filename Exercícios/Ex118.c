/*118- Receba uma palavra e imprima de trás-para-frente.*/

#include <stdio.h>

int main(){

    char palavra[10];

    printf("Digite uma palavra: \n");
    fgets(palavra, 10, stdin);

    for(int i= 9; i>=0; i--){
        printf("%c", palavra[i]);
    }

    return 0;
}
