'''
Autor:Murilo Oliva Mantovani RA:834730
Data de criação: 15/07/24
Data de modificação: 15/07/24
Objetivo:Observar quais medias dos alunos sao maiores que a media total de sala
'''
    
#Ler a nota dos alunos

print("Quantos alunos tem na turma?")
nAlunos = input()
nAlunos = int(nAlunos)

notas = []

for i in range(nAlunos):
    nota = float(input(f"Nota do aluno {i + 1}: "))
    notas.append(nota) #append serve para colocar a nota no final da lista
    

#Calcular a media da sala
soma = 0.0

for i in range(nAlunos):
    soma = soma + notas[i]
    
media = soma/nAlunos

#Diga quantos alunos possuem nota maior que a media da turma
cont = 0
for i in range(len(notas)):
    if notas[i] > media:
        cont += 1
        print(f"A {i+1}ª nota ({notas[i]:.1f}) foi maior que a média!")
    
print(f"A quantidade de alunos que possuem nota maior que a média da turma foi de: {cont}!")

