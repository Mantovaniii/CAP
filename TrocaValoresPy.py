# Autor: Murilo Oliva Mantovani
# Data de criação: 17/07/24
# Data de modificação: 17/07/24
# Objetivo: Trocar o valor de duas variáveis.

#Declarar as variáveis
A = 3
B = 5

#Falar o valor das variáveis Antes
print(f"Antes:\nA = {A} e B = {B}")

#Trocar o valor das variáveis
temp = A
A = B
B = temp

#Falar o valor das variáveis Depois
print(f"Depois:\nA = {A} e B = {B}")