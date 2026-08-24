def helloworld(string): 
    print(string)


helloworld("print")

idade = int(input("Digite sua idade: "))

tituloEleitor = input("Possui titulo de eleitor? ")

if tituloEleitor.lower() == "sim":
    tituloEleitor = True 
else: 
    tituloEleitor = False

if idade >= 16 and tituloEleitor:
    print("Pode votar!\n")
else:
    print("Pode nao man\n")


print("\n--------------------------\n")
print("Mas voce pode dirigir?")

cnh = input("Possui CNH? ")

if cnh.lower() == "sim":
    cnh = True 
else: 
    cnh = False

if idade >= 18 and cnh:
    print("Ta liberado!")
else:
    print("Pode nao man")
