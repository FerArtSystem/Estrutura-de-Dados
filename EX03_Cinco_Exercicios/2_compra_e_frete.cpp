#include <iostream>
using namespace std;
int main() 
{
  int preco, frete;
  float valorfinal;
  
  cin >> preco;
  frete = 15;
  
  valorfinal=preco+frete;
    if (preco >= 100)
 {
   cout << "Você tem frete grátis para essa compra";
 } 
  else
  {
    cout << "o valor da sua compra com o frete é "<< valorfinal;
  }
 {}
    return 0;
}