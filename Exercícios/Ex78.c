/*78- Crie um algoritmo que simule o funcionamento de um caixa de supermercado. O caixa fica aberto até o fim do expediente
 e pode processar a compra de vários clientes.  Cada cliente pode comprar vários itens (1.Feijão - R$ 2.0, 2.Arroz - 
 R$ 1.5, 3.Carne - R$ 10.0, 4. Tomate - R$ 3.0, 5. Cebola - R$ 2.5). Ao ler cada item deve ser exibida uma mensagem para 
 o operador do caixa perguntando se há mais itens a serem processados. Ao final, exiba quanto a compra custou ao cliente. 
 E então solicite do operador do caixa a informação se deseja fechar o caixa.  Quando o caixa for fechado, imprima quanto 
 de dinheiro aquele caixa apurou no dia.*/

 # Dicionário com os itens e seus respectivos preços
itens = {
    1: {"nome": "Feijão", "preco": 2.0},
    2: {"nome": "Arroz", "preco": 1.5},
    3: {"nome": "Carne", "preco": 10.0},
    4: {"nome": "Tomate", "preco": 3.0},
    5: {"nome": "Cebola", "preco": 2.5}
}

total_caixa = 0.0  # Variável para armazenar o total apurado no caixa

# Loop para processar as compras dos clientes
while True:
    print("=== Novo Cliente ===")
    total_cliente = 0.0  # Variável para armazenar o total da compra do cliente

    # Loop para processar os itens da compra do cliente
    while True:
        print("Itens disponíveis:")
        for codigo, item in itens.items():
            print(f"{codigo}. {item['nome']} - R$ {item['preco']:.2f}")

        codigo_item = int(input("Digite o código do item: "))
        if codigo_item not in itens:
            print("Código de item inválido. Tente novamente.")
            continue

        item = itens[codigo_item]
        total_cliente += item["preco"]

        opcao = input("Há mais itens a serem processados? (S/N): ")
        if opcao.upper() == "N":
            break

    total_caixa += total_cliente
    print(f"Total da compra do cliente: R$ {total_cliente:.2f}")

    opcao_caixa = input("Deseja fechar o caixa? (S/N): ")
    if opcao_caixa.upper() == "S":
        break

print(f"Total apurado no caixa no dia: R$ {total_caixa:.2f}")
