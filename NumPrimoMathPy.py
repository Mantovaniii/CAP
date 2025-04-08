#Autor:Murilo Oliva Mantovani
#RA:834730
#Data de criação:21/08/24
#Data de modificação:21/08/24
#Objetivo:Calcular se é um número primo ou não

import math

# Ler o valor que será analisado
valor = int(input("Digite o valor: "))
primo = True

# Calcular a raiz quadrada do valor
raiz = int(math.sqrt(valor))

# Calcular se o valor é primo
for i in range(2, raiz + 1):
    if valor % i == 0:
        primo = False
        break

# Verificar e imprimir se o valor é primo ou não
if not primo:
    print("O valor não é primo")
else:
    print("O valor é primo")

