#include <iostream>   // Biblioteca para entrada e saída (cout, cin)
#include <string>     // Biblioteca para usar a classe string

using namespace std;  // Evita precisar escrever std:: a todo momento

int main() {
    string palavra;   // Declara uma variável string para armazenar a palavra
    int contadorVogais = 0; // Contador de vogais inicializado em 0

    // Pede ao usuário para digitar uma palavra
    cout << "Digite uma palavra: ";
    cin >> palavra;   // Lê a palavra digitada pelo usuário (até o primeiro espaço)

    // Percorre cada caractere da string usando um laço for
    for (int i = 0; i < palavra.length(); i++) {
        char c = palavra[i]; // Pega o caractere atual na posição i

        // Verifica se o caractere é uma vogal minúscula ou maiúscula
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contadorVogais++; // Se for vogal, incrementa o contador
        }
    }

    // Exibe o total de vogais encontradas
    cout << "Total de vogais: " << contadorVogais << endl;

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
