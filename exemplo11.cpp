// Example program
#include <iostream>
#include <string>
#include <cmath>
#include <cstdint>

using namespace std;

int calc_fib(int indice)
{
    if(indice == 0 || indice == 1)
        return 1;
    
    return (calc_fib(indice - 1) 
        + calc_fib(indice - 2));
}

long long calc_fib2(int indice)
{
    if(indice == 0 || indice == 1)
        return 1;
    
    long long aux1 = 1;
    long long aux2 = 1;
    long long novo;
    
    for(int i = 2; i <= indice; i++) {
        // x[n] = x[n-1] + x[n-2]
        novo = aux1 + aux2;
        aux2 = aux1;
        aux1 = novo;
    }
    
    return novo;
}

int main()
{
    while(true) {
        int i;
        cout << "Fib: ";
        cin >> i;
        // cout << calc_fib(i) << endl;
        cout << calc_fib2(i) << endl;
    }

}
