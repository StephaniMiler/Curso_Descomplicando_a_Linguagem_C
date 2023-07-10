/*155- Exemplo função free()*/
//Função free(): garante que a memória seja liberada após a execução do programa.

#include <stdio.h>
#include <stdlib.h>

int main(){ 

    int *ponteiro = (int*)malloc(sizeof(int)); 
                                         
    if(ponteiro == NULL){
        printf('malloc nao funcionou!');
        return 1;
    }

    *ponteiro = 1000;

    printf("%d\n", *ponteiro);

    //Libera a memória alocada pelo malloc
    free(ponteiro); //função free + variavel que será liberada

    printf("%d\n", *ponteiro);
    
    return 0;
}