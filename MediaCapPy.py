
#Autor:Murilo Oliva Mantovani RA:834730
#Data de criação:10/07/2024
#Data de modificação:10/07/2024
#Objetivo:Calcular a media das notas de CAP


#Declaração das variáveis
p = [0.0, 0.0, 0.0]
at = [0.0] * 10

#Ler as notas das provas
for i in range(3):
    p[i] = float(input(f"Diga a sua nota na p{i+1}: "))
    
#Ler as notas das ativadades
for i in range(10):
    at[i] = float(input(f"Diga sua nota na at{i+1}: "))
    
#Calcular a média das notas
provas = (p[0] * 0.25) + (p[1] * 0.25) + (p[2] * 0.30)
ats = (sum(at) / 10) * 0.20
media = provas + ats

#Diga a média das notas
print(f"A sua média das notas de CAP foi de: {media:.2f}")