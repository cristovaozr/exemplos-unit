// Example program
#include <iostream>
#include <string>
#include <cmath>
#include <cstdint>

using namespace std;

void imprime_numeros(int v[], int tamanho)
{
    if(tamanho < 0) {
        cout << "Erro! Tamanho foi negativo!" << endl;
        return;
    }
    
    for(int i = 0; i < tamanho; i++) {
        cout << v[i] << endl;
    }
}

int main()
{
    int array[3] = {26, 2, 87};
    
    imprime_numeros(array, 10);
}