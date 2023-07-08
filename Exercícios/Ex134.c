/*134- Crie um programa que armazene o nome e o salário de 10 funcionários. Imprima na tela o nome e o salário das pessoas que possuem o maior e o menor salário.*/

#include <stdio.h>
#include <limits.h>

int main(){

    int quant_Funcionarios = 10;
    char nomes[quant_Funcionarios][30]; //Armazena nomes por linha
    float salarios[quant_Funcionarios]; //Armazena os salários de cada funcionário

    printf("**Nomes dos fucionarios **\n");

    for(int linha= 0; linha <quant_Funcionarios; linha ++){
        printf("Digite o nome do funcionario %i: ", linha +1);
        fgets(nomes[linha], 30, stdin);
    }

    printf("**Salario dos fucionarios **\n");

    for(int i= 0; i <quant_Funcionarios; i ++){
        printf("Digite o salario do funcionario %i: ", i +1);
        scanf("%f", &salarios[i]);
        getchar();
    }

    float maior_salario = INT_MIN;
    float menor_salario = INT_MAX;

    //Verifica maior e menor salario
    for(int i= 0; i<quant_Funcionarios; i++){
        if(salarios[i] > maior_salario){
            maior_salario = salarios[i];
        }

        if(salarios[i] < menor_salario){
            menor_salario = salarios[i];
        }
    }

    //Imprimindo as informações (nome e salário)
    for(int i= 0; i<quant_Funcionarios; i++){
        printf("\n O funcionario %i se chama %s e ganha %.2f reais. \n" , i+1, nomes[i], salarios[i]);
    }

    //Imprime o maior e o menor salario
    printf("\n \n O maior salario eh %.2f reais e o menor salario eh %.2f reais.", maior_salario, menor_salario);

    return 0;
}