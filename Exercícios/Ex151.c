/*151- Struct e ponteiros - exemplo*/

#include <stdio.h>

int main(){

    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois; // Uma estrutura do tipo horario chamada agora e um ponteirodo tipo horario chamado depois
    depois = &agora; //O ponteiro depois agora aponta para o endereço de agora

    (*depois).hora = 20; //passa um valor para a hora de agora também
    (*depois).minuto = 30;
    (*depois). segundo = 14;

    printf("%i:%i:%i", agora.hora, agora.minuto, agora.segundo); //saida sera 20:30:14
    

    //Outra forma de atribuir o valor pelo ponteiro:
    depois -> hora    = 15;
    depois -> minuto  = 54;
    depois -> segundo = 03;
    printf("\n%i:%i:%i", agora.hora, agora.minuto, agora.segundo); //saida sera 15:54:03

    //Operações matemáticas com structs + ponteiros
    int somatorio = 100;

    struct horario antes;

    antes.hora = somatorio + depois -> segundo; //100 + 03 = 103
    antes.minuto = depois -> minuto / 2 ; //54 / 2 = 27
    antes.segundo = somatorio * depois -> segundo; // 100*3 = 300

    printf("\n%i:%i:%i", antes.hora, antes.minuto, antes.segundo);

    return 0;
}