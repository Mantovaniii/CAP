'''
Autor:Murilo Oliva Mantovani (834730)
Data de criação:09/09/24
Data de modificação:09/09/24
Objetivo:AP7 TAD número racional
'''
import math

# Definindo a estrutura tRacional como um registro
class tRacional:
    def __init__(self, n, d):
        self.n = n  # Numerador
        self.d = d  # Denominador
        self.simplificar()

    def simplificar(self):
        """Simplifica o número racional."""
        gcd = math.gcd(self.n, self.d)
        self.n //= gcd
        self.d //= gcd
        # Se o denominador for negativo, transfere o sinal para o numerador
        if self.d < 0:
            self.n *= -1
            self.d *= -1

    def __str__(self):
        """Representação em string de um número racional."""
        return f"{self.n}/{self.d}"

# Sub-rotinas para manipulação de números racionais

"""
Sub-rotina: ler_racional
Objetivo: Ler um número racional a partir do teclado.
Parâmetros:
- Nenhum.
Valor de Retorno:
- Retorna um objeto tRacional com o numerador e denominador simplificados.
"""
def ler_racional():
    n = int(input("Digite o numerador: "))
    d = int(input("Digite o denominador (diferente de 0): "))
    while d == 0:
        d = int(input("Denominador não pode ser 0. Digite novamente: "))
    return tRacional(n, d)

"""
Sub-rotina: escrever_racional
Objetivo: Exibir o número racional.
Parâmetros:
- r: objeto tRacional (entrada de dados)
Valor de Retorno:
- Nenhum.
"""
def escrever_racional(r):
    print(f"Racional: {r}")

"""
Sub-rotina: somar_racionais
Objetivo: Somar dois números racionais.
Parâmetros:
- r1: primeiro número racional (entrada de dados)
- r2: segundo número racional (entrada de dados)
Valor de Retorno:
- Retorna um novo tRacional com a soma de r1 e r2.
"""
def somar_racionais(r1, r2):
    numerador = r1.n * r2.d + r2.n * r1.d
    denominador = r1.d * r2.d
    return tRacional(numerador, denominador)

"""
Sub-rotina: multiplicar_racionais
Objetivo: Multiplicar dois números racionais.
Parâmetros:
- r1: primeiro número racional (entrada de dados)
- r2: segundo número racional (entrada de dados)
Valor de Retorno:
- Retorna um novo tRacional com o produto de r1 e r2.
"""
def multiplicar_racionais(r1, r2):
    numerador = r1.n * r2.n
    denominador = r1.d * r2.d
    return tRacional(numerador, denominador)

# Testando as sub-rotinas no programa principal
if __name__ == "__main__":
    print("Lendo o primeiro número racional:")
    r1 = ler_racional()

    print("Lendo o segundo número racional:")
    r2 = ler_racional()

    print("Primeiro número racional simplificado:")
    escrever_racional(r1)

    print("Segundo número racional simplificado:")
    escrever_racional(r2)

    print("Soma dos números racionais:")
    r_soma = somar_racionais(r1, r2)
    escrever_racional(r_soma)

    print("Produto dos números racionais:")
    r_produto = multiplicar_racionais(r1, r2)
    escrever_racional(r_produto)
