#include <stdio.h>
int main()
{
  int idade;
  printf("Digite a sua idade: ");
  scanf("%d", &idade);//pedir esclarecimento da prof
if (idade < 18)
 {
   printf("Você é menor de idade, ainda pode cometer crimes!\n");
 }
else
 {
   printf("Você é maior de idade, já pode ser preso!\n");
 }
return 0;
}