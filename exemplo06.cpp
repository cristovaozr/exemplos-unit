// Example program
#include <iostream>
#include <string>

using namespace std;

#define PRINT(x) cout << #x " == " << x << endl

int main()
{
    int i = 5;

    // Pós-fixado: atribuição seguida de incremento    
    int j = i++; // j == 5; i == 6
    PRINT(i);
    PRINT(j);
    
    // Pré-fixado: incremento seguido de atribuição
    int k = ++i; // i == 7; k == 7
    PRINT(i);
    PRINT(k);
}
