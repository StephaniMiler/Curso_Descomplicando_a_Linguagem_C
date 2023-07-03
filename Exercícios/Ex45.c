/*45- Desenvolva um sistema de compra de bebidas. Este sistema, inicialmente, deve pedir para que o usuário informe a 
sua idade. Se a idade for menor que 18 anos, deve-se imprimir a seguinte mensagem: "você eh de menor e nao pode comprar 
bebidas". Caso o usuário tenha idade suficiente, o sistema de apresentar o seguinte menu:
Whisky
Vodka
Cerveja
Cachaça*/

#include <stdio.h>

#include <stdio.h>

int main() {
    int idade;
    int opcao;
    int codigo;
    int quantidade;
    float valorUnitario;
    float valorTotal;
    float desconto = 0.0;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Você é menor de idade e não pode comprar bebidas.\n");
    } else {
        printf("Menu de bebidas:\n");
        printf("1. Whisky\n");
        printf("2. Vodka\n");
        printf("3. Cerveja\n");
        printf("4. Cachaça\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Código   Nome     Preço\n");
                printf("100      Whisky1  200.00\n");
                printf("101      Whisky2  150.00\n");
                printf("102      Whisky3  140.00\n");
                break;
            case 2:
                printf("Código   Nome     Preço\n");
                printf("200      Vodka1   60.00\n");
                printf("201      Vodka2   40.00\n");
                printf("202      Vodka3   30.00\n");
                break;
            case 3:
                printf("Código   Nome       Preço\n");
                printf("300      Cerveja1   1.50\n");
                printf("301      Cerveja2   2.00\n");
                printf("302      Cerveja3   3.00\n");
                break;
            case 4:
                printf("Código   Nome        Preço\n");
                printf("400      Cachaça1    8.00\n");
                printf("401      Cachaça2    20.00\n");
                printf("402      Cachaça3    22.00\n");
                break;
            default:
                printf("Opção inválida.\n");
                return 0;
        }

        printf("Digite o código da bebida desejada: ");
        scanf("%d", &codigo);

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidade);

        switch (codigo) {
            case 100:
                valorUnitario = 200.00;
                break;
            case 101:
                valorUnitario = 150.00;
                break;
            case 102:
                valorUnitario = 140.00;
                break;
            case 200:
                valorUnitario = 60.00;
                break;
            case 201:
                valorUnitario = 40.00;
                break;
            case 202:
                valorUnitario = 30.00;
                break;
            case 300:
                valorUnitario = 1.50;
                break;
            case 301:
                valorUnitario = 2.00;
                break;
            case 302:
                valorUnitario = 3.00;
                break;
            case 400:
                valorUnitario = 8.00;
                break;
            case 401:
                valorUnitario = 20.00;
                break;
            case 402:
                valorUnitario = 22.00;
                break;
            default:
                printf("Código de bebida inválido.\n");
                return 0;
        }

        if (quantidade < 1) {
            printf("Quantidade inválida.\n");
            return 0;
        }

        valorTotal = valorUnitario * quantidade;

        if (quantidade > 5 && quantidade <= 50) {
            desconto = 0.1;
        } else if (quantidade > 50 && quantidade <= 100) {
            desconto = 0.3;
        } else if (quantidade > 100) {
            desconto = 0.35;
        }

        valorTotal -= valorTotal * desconto;

        printf("Bebida: %d\n", codigo);
        printf("Quantidade: %d\n", quantidade);
        printf("Valor a ser pago: R$ %.2f\n", valorTotal);
    }

    return 0;
}
