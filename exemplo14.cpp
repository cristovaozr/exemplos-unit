// Example program
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Overflow {
    char array1[4];
    int a;
    float b;
};

int soma(int *array1, int tamanho)
{
    int ret = 0;
    for(int i = 0; i < tamanho; i++) {
        ret += array1[i];
    }
    
    return ret;
}

int main()
{
    int valores[5] = {1, 2, 3, 4, 5};
    
    cout << soma(valores, 5) << endl;
    
    const char *nome = "Cristovao";
    cout << nome << endl;
    
    char nome2[4] = {'J', 'o', 'a', 'o'};
    cout << nome2 << endl;
    
    Overflow of = {
        {'a','b','c','d'},
        0x12345678,
        3.1415f
    };
    
    Overflow *ptr = &of;
    
    cout << of.array1 << endl;
    
    cout << ptr->array1 << endl;
    
    // Acesso a uma região inválida
    unsigned int *ptrInvalido = (unsigned int *)0x00000000;
    
    // Deve dar erro aqui!
    cout << *ptrInvalido << endl;
    
    return 0;
}
