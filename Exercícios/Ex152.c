/*152- Ponteiros em structs (membros)*/

#include <stdio.h>

int main(){

    struct horario{
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    };

    struct horario hoje;

    int hora    =  200;
    int minuto  =  300;
    int segundo =  400;

    //Atribuir os ponteiros da estrutura para as variáveis acima:
    hoje.pHora    = &hora   ;
    hoje.pMinuto  = &minuto ;
    hoje.pSegundo = &segundo;

    //Imprime os membros da struct hoje (200,300,400)
    printf("Hora:    %i\n", *hoje.pHora   );
    printf("Minuto:  %i\n", *hoje.pMinuto );
    printf("Segundo: %i\n", *hoje.pSegundo);

    *hoje.pSegundo = 1000; //Alterou o valor do ponteiro pSegundo

    printf("%i", *hoje.pSegundo);


    return 0;
}