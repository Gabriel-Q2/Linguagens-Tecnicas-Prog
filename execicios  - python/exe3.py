print("Fazendo compras\n")

preco = float(input("Qual o valor do produto: R$"))

a_avista = input("Sera a vista? ")

if a_avista.lower() == "sim":
    a_avista = True
else:
    a_avista = False

if a_avista == True:
    preco = preco * 0.90
    preco_rounded = round(preco, 2)
    print(f"O preco com desconto e: {preco_rounded}\n")
else:
    print(f"Voce nao recebeu desconto, o preco e: {preco}\n")


print("--------------------------\n")

print("Calculador de salario\n")

salario = float(input("Digite seu salario: "))

print(f"Seu salario antes do aumento e: {salario}\n")

if salario <= 2000:
    salario = salario * 1.15
    salario_rounded = round(salario, 2)
    print(f"Seu salario apos o aumento e: {salario_rounded}\n")
else:
    print("Voce nao recebeu aumento\n")
