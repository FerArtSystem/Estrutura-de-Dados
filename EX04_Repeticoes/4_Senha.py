# Define a senha correta
senha_correta = "1234"

# Pede para o usuário digitar a senha
senha_digitada = input("Digite a senha: ")

# Enquanto a senha digitada for diferente da senha correta
while senha_digitada != senha_correta:
    print("❌Senha incorreta!")  # Mostra que a senha está errada
    senha_digitada = input("Digite a senha: ")  # Pede a senha novamente

# Quando a senha estiver correta, sai do loop e mostra mensagem de sucesso
print("✅Senha correta!")