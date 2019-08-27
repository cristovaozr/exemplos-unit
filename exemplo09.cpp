// Example program
#include <iostream>
#include <string>
#include <cmath>
#include <cstdint>

using namespace std;

void imprime_numeros(int v[], int &tamanho)
{
    if(tamanho < 0) {
        cout << "Erro! Tamanho foi negativo!" << endl;
        return;
    }
    
    for(int i = 0; i < tamanho; i++) {
        cout << v[i] << endl;
    }
    
    tamanho = 15;
}

int divisao(int a = 0, int b = 2)
{
    if(b == 0) {
        return 0;
    }
    
    int c = a / b;
    return c;
}

int main()
{
    int array[3] = {26, 2, 87};
    int t = 10;
    
    imprime_numeros(array, t);
    cout << "O valor de t eh: " << t << endl;
    
    cout << "15 / 3 == " << divisao(15, 3) << endl;
    cout << "14 / 2 == " << divisao(14) << endl;
    cout << "divisao() == " << divisao() << endl;
}