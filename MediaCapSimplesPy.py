
#Autor:Murilo Oliva Mantovani RA:834730
#Data de criação: 10/07/2024
#Data de modificação: 10/07/2024
#Objetivo: Calcular a nota média em CAP


#Ler as notas das provas
notaProva1 = float(input("Digite a nota da prova 1:"))   
notaProva2 = float(input("Digite a nota da prova 2:"))   
notaProva3 = float(input("Digite a nota da prova 3:"))   

#Ler notas dos trabalhos
    
notaTrabalho1 = float(input("Digite a nota do trabalho 1:"))
notaTrabalho2 = float(input("Digite a nota do trabalho 2:"))
notaTrabalho3 = float(input("Digite a nota do trabalho 3:"))
notaTrabalho4 = float(input("Digite a nota do trabalho 4:"))
notaTrabalho5 = float(input("Digite a nota do trabalho 5:"))
notaTrabalho6 = float(input("Digite a nota do trabalho 6:"))
notaTrabalho7 = float(input("Digite a nota do trabalho 7:"))
notaTrabalho8 = float(input("Digite a nota do trabalho 8:"))
notaTrabalho9 = float(input("Digite a nota do trabalho 9:"))
notaTrabalho10 = float(input("Digite a nota do trabalho 10:"))
    
#Calcular a média dos trabalhos
    
mediaTrabalhos = ((notaTrabalho1)+(notaTrabalho2)+(notaTrabalho3)+(notaTrabalho4)+(notaTrabalho5)+(notaTrabalho6)+(notaTrabalho7)+(notaTrabalho8)+(notaTrabalho9)+(notaTrabalho10))/10
    
#Calcular a nota média
    
notaMedia = notaProva1 * 0.25 + notaProva2 * 0.25 + notaProva3 * 0.3 + mediaTrabalhos * 0.2
print("Nota media = " + str(notaMedia))
