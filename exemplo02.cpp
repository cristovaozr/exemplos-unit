// Example program
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

#define VALOR_INICIAL   14

int main()
{
  int a, b;
  
  a = 0xa0; // Constantes hexadecimais
  b = 0x0b;
  
  int f, g;
  
  f = 0377;
  g = 0b10100101;
  
  int c = a | b;
  int d = a & b;
  
  cout << "c == " << c << endl << "d == " << d << endl;
  cout << "f == " << f << endl << "g == " << g << endl;
  
  printf("%.2x\n", g);
}
