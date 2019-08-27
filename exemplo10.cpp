// Example program
#include <iostream>
#include <string>
#include <cmath>
#include <cstdint>

using namespace std;

void init_fib(int fib[], int size)
{
   fib[0] = 1;
   fib[1] = 1;
   
   int i = 2;
   while(i < size) {
        fib[i] = fib[i-1] + fib[i-2];
        i++;
   }
}

int le_fib(int fib[], int indice)
{
    if(indice > 20) {
        return 0;
    }
    
    return fib[indice];
}

int main()
{

    int fibonnaci[20] = {0};
    init_fib(fibonnaci, 20);
    
    while(true) {
        int i;
        
        cout << "Qual o numero de fib? " << endl;
        cin >> i;
        cout << le_fib(fibonnaci, i) << endl;
    }
    
}
