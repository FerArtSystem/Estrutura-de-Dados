cor = input("Digite o nome de uma cor primária: ")

# Converte o que o usuário digitou para minúsculas
cor = cor.lower()

if cor != "azul" and cor != "vermelho" and cor != "amarelo":
    print("\n⚠️Essa cor não faz parte das cores primárias!")

elif cor == "vermelho":
    print("\n🔴VERMELHO: calor, energia, perigo")

elif cor == "azul":
    print("\n🔵AZUL: calma, inteligência, frio")

elif cor == "amarelo":
    print("\n🟡AMARELO: alegria, riqueza, luz")
