print("Calculadora Simples\n")

a = float(input("Insira o primeiro número: "))
operador = input("Digite o OPERADOR (+, -, *. /): ")
b = float(input("Insira o segundo número: "))

if operador == "+":
    print(a + b)
if operador == "-":
    print(a - b)
if operador == "*":
    print(a * b)
if operador == "/":
    if b != 0:
        print(a / b)
    else:
        print("Essa divisão precisa ser maior que zero")
