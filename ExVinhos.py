# Autor: Murilo Oliva Mantovani
# RA: 834730
# Data de criação: 21/08/24
# Data de modificação: 21/08/24
# Objetivo: Registrar os valores e tipos de vinho


# Declarar as variáveis
vinho_mais_caro_nome = ""
vinho_mais_caro_preco = 0.0
vinho_mais_caro_tipo = ""

while True:  # Loop infinito, até que seja interrompido

    # Ler o nome do vinho
    nome = input("Digite o nome do vinho (ou FIM para encerrar): ")
        
    # Verificar se o nome é "FIM" para encerrar a entrada de dados
    if nome == "FIM":
        break

    # Ler o preço e o tipo do vinho
    preco = float(input("Digite o preço do vinho: "))

    tipo = input("Digite o tipo do vinho (T para vinho tinto, B para vinho branco e R para vinho rosé): ")

    # Atualizar o vinho mais caro se o preço atual for maior que o vinho mais caro conhecido
    if preco > vinho_mais_caro_preco:
        vinho_mais_caro_nome = nome
        vinho_mais_caro_preco = preco
        vinho_mais_caro_tipo = tipo

# Exibir os dados do vinho mais caro
print("Vinho mais caro:")
print(f"Nome: {vinho_mais_caro_nome}")
print(f"Preço: R$ {vinho_mais_caro_preco:.2f}")
print(f"Tipo: {vinho_mais_caro_tipo}")
