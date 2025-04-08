def main():
    notas = []
    for i in range(10):
        nota  = float(input(f"Digite a {i+1}ª nota: \n"))
        notas.append(nota)
        
    media = sum(notas) / 10
    
    print(f"A sua média será de: {media:.2f}")
    