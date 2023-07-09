/*146- Em uma aplicação que trabalha com retângulos, definiu-se uma struct para armazenar os 
tamanhos dos dois lados diferentes (valores reais) de um dado retângulo. Além disso, existe 
também uma função que recebe os dados de dois retângulos A e B (dois parâmetros do tipo struct 
descrito anteriormente) e retorna 1 se o perímetro do retângulo A (dado pela soma de todos os 
lados) for maior que o do retângulo B e 0 caso contrário. Neste contexto, pede-se (ATENÇÃO: não 
é necessário apresentar o código da função main());
a) Apresente o código, em C, que define a struct "retangulo", cujos membros são os dois lados 
diferentes de um retângulo (descritos acima). 
b) Apresente o código, em C, da função de comparação de perímetros de retângulos descrita acima
*/

#include <stdio.h>

struct retangulo{
    float A;
    float B;
};

int Compara(struct retangulo ret1, struct retangulo ret2){

   float perimetroA = ret1.A + ret1.A + ret1.B + ret1.B;
   float perimetroB = ret2.A + ret2.A + ret2.B + ret2.B;

   if(perimetroA > perimetroB){
    return 1;
   }
   else{
    return 0;
   }

}



