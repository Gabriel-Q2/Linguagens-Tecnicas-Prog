print("Bem vindo ao Cadastro e login.")
print("-----------------------")
print("Cadastro:")

user = input("Digite seu usuario: ")
senha = int(input("Digite sua senha: "))

print("-----------------------")
print("Login:")

user_login = input("Digite seu usuario de login: ")
senha_login = int(input("Digite sua senha de login: "))


if user_login.lower() == user:
    user_authorized = True
else:
    user_authorized = False

if senha_login == senha:
    senha_authorized = True
else:
    senha_authorized = False

if user_authorized and senha_authorized:
    print("Bem vindo!")
else:
    print("Usuario ou senha incorretos!")
