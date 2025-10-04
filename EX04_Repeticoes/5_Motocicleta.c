#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // Variável para armazenar a escolha do usuário
    int escolha;
    
    // Mensagem de boas-vindas
    printf("🏍️ Bem-vindo ao simulador de motocicleta!\n");
    
    // Menu de opções
    printf("Escolha uma ação:\n");
    printf("1 - Ligar a moto\n");
    printf("2 - Acelerar\n");
    printf("3 - Desligar a moto\n");
    
    // Lê a escolha do usuário
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    
    // Estrutura condicional para executar a ação correta
    if (escolha == 1) {
        printf("✅ Moto ligada! Vamos acelerar!\n");
    } 
    else if (escolha == 2) {
        printf("🏍️ Vrum vrum! Acelerando a moto!\n");
    } 
    else if (escolha == 3) {
        printf("🛑 Moto desligada. Até a próxima!\n");
    } 
    else {
        printf("❌ Opção inválida! Tente novamente.\n");
    }
    
    return 0; // Encerra o programa
}
