/*3- Em uma aplicação que trabalha com retângulos, definiu-se uma struct 
para armazenar os tamanhos dos dois lados diferentes (valores reais) de 
um dado retângulo. Além disso, existe também uma função que recebe os dados 
de dois retângulos A e B (dois parâmetros do tipo struct descrito 
anteriormente) e retorna 1 se o perímetro do retângulo A (dado pela soma 
de todos os lados) for maior que o do retângulo B e 0 caso contrário. 
Neste contexto, pede-se (ATENÇÃO: não é necessário apresentar o código da 
função main());
a) Apresente o código, em C, que define a struct "retangulo", cujos membros 
são os dois lados diferentes de um retângulo (descritos acima). 
b) Apresente o código, em C, da função de comparação de perímetros de 
retângulos descrita acima
*/

#include <stdio.h>

typedef struct retangulo
{
    float lado1;
    float lado2;
} retangulo;


int comparaRetangulos(retangulo retA, retangulo retB){

    float perimetroA = (retA.lado1 * 2) + (retA.lado2 * 2);
    float perimetroB = (retB.lado1 * 2) + (retB.lado2 * 2);

    if(perimetroA > perimetroB){
        return 1;
    }
    else{
        return 0;
    }

}

