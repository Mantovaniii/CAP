#Autor:Murilo Oliva Mantovani RA:834730
#Data de criação:17/07/24
#Data de modificação:17/07/24
#Objetivo:Classificar individuo pela idade

def faixa_etaria(idade):
    switcher = {
        range(0, 13): "Infância",
        range(13, 18): "Adolescência",
        range(18, 26): "Juventude",
        range(26, 36): "Adulto jovem",
        range(36, 46): "Adulto",
        range(46, 61): "Meia-idade",
        range(61, 151): "Idoso"
    }
    for key in switcher:
        if idade in key:
            return switcher[key]
    return "ERRO"  # Caso a idade seja um valor fora dos intervalos definidos

# Perguntar qual a idade
idade = int(input("Digite a idade:\n"))

# Obter a faixa etária usando a função
faixa = faixa_etaria(idade)

# Exibir a faixa etária
print(faixa)
