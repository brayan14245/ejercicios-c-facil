//Escriba un programa que convierta de centímetros a pulgadas. Una pulgada es igual a 2.54 centímetros.//
#include <iostream>
using namespace std;
int main() {
 double centimetros, pulgadas;
  cout << "ingrese el valor en centimetros: ";
  cin >> centimetros;
  pulgadas = centimetros/ 2.54;
  cout << centimetros << " cm " << pulgadas << " in " << endl;
  return 0;
}