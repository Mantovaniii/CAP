print("Digite o peso:")
peso = input()
peso = float(peso)

print("Digite o altura:")
altura = input()
altura = float(altura)

imc = peso/(altura*altura)

print(f"O seu IMC é: {imc:.2f}")