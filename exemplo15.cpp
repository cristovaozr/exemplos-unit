// Example program
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int soma(int a, int b)
{
    return (a + b);
}

int subt(int a, int b)
{
    return (a - b);
}

int opera_vetor(const int array1[], int tamanho, int(*op)(int, int))
{
    int ret = 0;
    for(int i = 0; i < tamanho; i++) {
        ret = op(ret, array1[i]);
    }
    
    return ret;
}


int main()
{
    
    int (*ptr_funcao)(int, int);
    
    ptr_funcao = subt;
    
    cout << "Valor: " << ptr_funcao(2, 3) << endl;

    int vetor[6] = {1, 2, 3, 4, 5, 6};
    
    cout << "Valor: " << opera_vetor(vetor, 6, soma) << endl;
    
    return 0;
}
