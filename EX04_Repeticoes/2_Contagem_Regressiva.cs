// Importa a biblioteca System, que contém classes básicas como Console para entrada e saída de dados
using System;

// Declara uma classe chamada ProgramaContagemRegressiva
// Em C#, todo programa precisa estar dentro de uma classe
class ProgramaContagemRegressiva
{
    // Método Main: ponto de entrada do programa
    // static = pertence à classe, não a um objeto
    // void = não retorna nenhum valor
    // string[] args = argumentos que podem ser passados ao executar o programa (não usamos aqui)
    static void Main(string[] args)
    {
        // Exibe uma mensagem no console pedindo que o usuário digite um número inteiro positivo
        // Console.Write NÃO pula linha no final
        Console.Write("Digite um número inteiro positivo: ");

        // Lê a entrada digitada pelo usuário como uma string
        // Console.ReadLine() captura tudo digitado até pressionar ENTER
        string entrada = Console.ReadLine();

        // Converte a string 'entrada' para um número inteiro
        // int.Parse gera erro se a entrada não for um número válido
        int numero = int.Parse(entrada);

        // Inicia um laço de repetição WHILE
        // A condição (numero >= 0) é verificada antes de cada repetição
        // Enquanto for verdadeira, o bloco dentro do while será executado
        while (numero >= 0)
        {
            // Exibe no console o valor atual da variável 'numero'
            // Console.WriteLine pula para a próxima linha após imprimir
            Console.WriteLine(numero);

            // Decrementa a variável 'numero' em 1
            // Isso evita um loop infinito e faz a contagem regressiva
            numero--;
        }

        // Após o while terminar (quando numero < 0), esta linha é executada
        // Exibe uma mensagem final para informar que a contagem acabou
        Console.WriteLine("Contagem regressiva finalizada!🏁");
    }
}
