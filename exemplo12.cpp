// Example program
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Estrutura {
    char a;
    int b;
    float c;
}; // total: 9 bytes mas ocupa 12 bytes em RAM

struct Estrutura2 {
    char a;
    int b;
    float c;
} __attribute__((packed)); // total: 9 bytes

int main()
{
    Estrutura e;
    Estrutura2 e2;
    
    cout << "Tamanho de \"Estrutura\": " << sizeof(e) << endl;
    cout << "Tamanho de \"Estrutura2\": " << sizeof(e2) << endl;
    
    return 0;
}
