/*156- Exemplo função calloc*/

/*função calloc():Seu objetivo é criar um vetor de tamanho dinâmico, ou seja, definido durante a execução do programa.
Difere da função malloc, também de C, pois além de inicializar os espaços de memória ainda atribui o valor 0 (zero) 
para cada um deles. É útil, pois em C quando se declara um variável o espaço no mapa de memória usado por esta 
provavelmente contém algum valor lixo; precisa de dois argumentos (o número de variáveis ​​a serem alocadas na memória 
e o tamanho em bytes de uma única variável).*/

#include <stdio.h>
#include <stdlib.h>

int main(){ 

    int *ponteiro = (int*)calloc(5, sizeof(int)); //Calloc recebe dois argumentos: quantos elementos se deseja alocar e o tamanho da variável(logo 5 * sizeof(int)) = 5 * 4 = 20
                                         
    if(ponteiro == NULL){
        printf('calloc nao funcionou!');
        return 1;
    }

    printf("%d\n", *ponteiro); //saída será 0 e não lixo de memória

    //poderia fazer isso 5 vezes, pois é um vetor de 5 posições
    *ponteiro = 1000;
    *(ponteiro + 1) = 350;
    *(ponteiro + 2) = 15;

    printf("\n%d\n %d\n %d\n", *ponteiro, *(ponteiro + 1), *(ponteiro + 2));
    
    free(ponteiro);

    return 0;
}