import java.util.Scanner; // Importa a classe Scanner, que permite ler entradas do teclado

public class Tabuada { // Declara a classe pública chamada Tabuada
    public static void main(String[] args) { // Método principal: ponto de entrada do programa
        // Criando um objeto Scanner para ler a entrada do usuário pelo console
        Scanner scanner = new Scanner(System.in);
        
        // Exibe uma mensagem solicitando ao usuário que digite um número
        System.out.print("Digite um número para ver sua tabuada: ");
        
        // Lê o número digitado pelo usuário e armazena na variável 'numero'
        int numero = scanner.nextInt();
        
        // Inicia um laço 'for' que repetirá de i = 1 até i = 10
        for (int i = 1; i <= 10; i++) {
            // Em cada repetição, calcula o resultado da multiplicação do número pelo contador 'i'
            int resultado = numero * i;
            
            // Se for a primeira linha (i == 1), imprime uma quebra de linha antes do resultado
            if (i == 1) {
                System.out.println(); // quebra de linha extra para melhor estética
            }

            // Exibe na tela a operação completa e o resultado
            System.out.println(numero + " x " + i + " = " + resultado);
        }
        
        // Fecha o objeto Scanner para liberar os recursos do sistema
        scanner.close();
    }
}
