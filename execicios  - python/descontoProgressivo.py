def descontoProgressivo(valor):
    if valor < 100:
        print(valor)
    if 100 <= valor < 300 :
        valordesconto = valor * 0.1
        valor = valor - valordesconto
        print(valor)
    if 300 < valor < 500 :
        valordesconto = valor * 0.15
        valor = valor - valordesconto
        print(valor)
    if valor > 500 :
        valordesconto = valor * 0.20
        valor = valor - valordesconto
        print(valor)

print("Digite o valor da compra: ")
valor = float(input())
descontoProgressivo(valor)
