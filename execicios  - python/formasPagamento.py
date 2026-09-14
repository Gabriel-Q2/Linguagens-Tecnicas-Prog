#Formas de pagamento
print("1 - À vista")
print("2 - Débito")
print("3 - Dinheiro")
print("4 - Pix")
print("5 - Boleto")
pagamento = int(input("Digite de 1 a 5 para a forma de pagamento: "))
match pagamento:
    case 1:
      print("Você escolheu a forma de pagamento à vista")
    case 2:
      print("Você escolheu a forma de pagamento no débito")
    case 3:
      print("Você escolheu a forma de pagamento dinheiro")
    case 4:
      print("Você escolheu a forma de pagamento pix")
    case 5:
      print("Você escolheu a forma de pagamento boleto")
    case _:
      print("Opção inválida")
