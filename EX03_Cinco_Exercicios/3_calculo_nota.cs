using System;

namespace CalculoNota
{
    public class Program
    {
        public static void Main(string[] args)
        {
            double nota;
            Console.WriteLine("Digite a sua nota, nobre aluno:");
            nota = Convert.ToDouble(Console.ReadLine());
            
            if (nota <= 5)
            {
                Console.WriteLine("❌Reprovado! Sinto muito 😞");
            }
            else if (nota <= 6)
            {
                Console.WriteLine("⚠️Em Recuperação, ainda há esperança 🙏");
            }
            else
            {
                Console.WriteLine("✅Aprovado, parabéns!");
            }
        }
    }
}