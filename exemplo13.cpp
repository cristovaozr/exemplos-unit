// Example program
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    long a, b;
    
    long *ptr = &a;
    
    a = 3;
    
    cout << "Valor de a: " << a << endl;
    
    *ptr = 5;
    
    cout << "Valor de a: " << a << endl;
    
    ptr = &b;
    
    *ptr = 15;
    
    cout << "Valor de a: " << a << endl;
    cout << "Valor de b: " << b << endl;
    
    return 0;
}
