num = int(input("Digite um numero: "))

if num > 0:
    print(f"{num} e um numero positivo\n")
elif num < 0:
    print(f"{num} e um numero negativo\n")
else: 
    print(f"{num} e igual a zero\n")

print("--------------------------\n")

print("Agora, veremos se e par ou impar: ")

if (num % 2) == 0:
    print(f"{num} e par\n")
else:
    print(f"{num} e impar\n")

print("--------------------------\n")

print("Agora, veremos qual numero e maior: \n")
num2 = int(input("Digite um segundo numero: "))

if num > num2:
    print(f"{num} e maior que {num2}\n")
else:
    print(f"{num2} e maior que {num}\n")
