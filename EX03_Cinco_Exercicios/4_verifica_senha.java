import java.util.*;

public class Main {
  
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Olá, digite sua senha de acesso:");
        String senha = scanner.nextLine();

        if (senha.equals("Admin123")) //equals foi adicionado
        {
            System.out.println("Olá! 👋 Bem vindo Administrador master and blaster!");
        } 
        else if (senha.equals("User123")) 
        {
            System.out.println("Olá! 👋Bem vindo Usuário que não é de craque!");
        } 
        else {
            System.out.println("Hey! 🤚 Você não é usuário autorizado!");
        }
    }
}
