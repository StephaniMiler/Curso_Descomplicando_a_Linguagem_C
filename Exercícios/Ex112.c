/*112- Um sistema de controle de estoque armazena o código (inteiro), a quantidade em estoque (inteiro) e o preço unitário
(float) das mercadorias. Fazer um programa que exiba um menu com as seguintes opções:
MENU
1 - Cadastrar mercadoria
2 - Consultar mercadoria
3 - Valor total em mercadorias
4 - Sair
Inicialmente não há nenhuma mercadoria cadastrada. A primeira opção permitirá que o usuário cadastre uma nova mercadoria 
informando todos os dados citados anteriormente.
A segunda opção permitirá que o usuário consulte o cadastro, informando o código da mercadoria.
A terceira opção permitirá a consulta do valor total do estoque, levando em conta todas as mercadorias cadastradas.
A quarta opção permitirá o término do programa.*/

#include <stdio.h>

#define MAX_MERCADORIAS 100

struct Mercadoria {
    int codigo;
    int quantidade;
    float precoUnitario;
};

void cadastrarMercadoria(struct Mercadoria estoque[], int* numMercadorias) {
    if (*numMercadorias >= MAX_MERCADORIAS) {
        printf("Limite de mercadorias atingido.\n");
        return;
    }

    struct Mercadoria novaMercadoria;

    printf("Digite o código da mercadoria: ");
    scanf("%d", &novaMercadoria.codigo);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &novaMercadoria.quantidade);

    printf("Digite o preço unitário: ");
    scanf("%f", &novaMercadoria.precoUnitario);

    estoque[*numMercadorias] = novaMercadoria;
    (*numMercadorias)++;

    printf("Mercadoria cadastrada com sucesso.\n");
}

void consultarMercadoria(struct Mercadoria estoque[], int numMercadorias) {
    int codigo;

    printf("Digite o código da mercadoria: ");
    scanf("%d", &codigo);

    int i;
    for (i = 0; i < numMercadorias; i++) {
        if (estoque[i].codigo == codigo) {
            printf("Código: %d\n", estoque[i].codigo);
            printf("Quantidade em estoque: %d\n", estoque[i].quantidade);
            printf("Preço unitário: %.2f\n", estoque[i].precoUnitario);
            return;
        }
    }

    printf("Mercadoria não encontrada.\n");
}

void calcularValorTotal(struct Mercadoria estoque[], int numMercadorias) {
    float valorTotal = 0.0;

    int i;
    for (i = 0; i < numMercadorias; i++) {
        valorTotal += estoque[i].quantidade * estoque[i].precoUnitario;
    }

    printf("Valor total em mercadorias: %.2f\n", valorTotal);
}

int main() {
    struct Mercadoria estoque[MAX_MERCADORIAS];
    int numMercadorias = 0;

    int opcao;

    do {
        printf("\nMENU\n");
        printf("1 - Cadastrar mercadoria\n");
        printf("2 - Consultar mercadoria\n");
        printf("3 - Valor total em mercadorias\n");
        printf("4 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarMercadoria(estoque, &numMercadorias);
                break;
            case 2:
                consultarMercadoria(estoque, numMercadorias);
                break;
            case 3:
                calcularValorTotal(estoque, numMercadorias);
                break;
            case 4:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}
