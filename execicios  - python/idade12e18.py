print("Prática Esportiva\n")

idade = int(input("Informe sua idade: "))

if idade >= 12 and idade <= 18:
    autorizacao = str(input("Você possui autorização?\n"))
    if autorizacao == "sim" or autorizacao == "Sim":
        print("Você pode fazer parte da pratica esportiva")
    else:
        print("Você não pode fazer parte da pratica esportiva")
else:
    print ("Você não tem a idade esperada no escopo!")
