def main():
    p = float(input("Digite o seu peso em kg: \n"))
    a = float(input("Digite a sua altura em metros:\n"))
    
    imc = p / (a * a)
    
    print(f"O seu IMC é: {imc:.2f}")

