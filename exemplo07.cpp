// Example program
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    // Array de inteiros;
    int array[3] = {0, 1, 2};

    // Array de ponto-flutuante
    float f_array[4] = {0.0, M_PI, M_E, M_SQRT2};

    // Array de caracteres
    char nome[10] = {'C', 'r', 'i', 's', 't',
        'o', 'v', 'a', 'o', 0};
    char sobrenome[9] = "Zuppardo";
  
    for(int i = 0; i < 3; i++) {    
        cout << "valor = " 
            << array[i] << endl;
    }
    
    cout << nome << " " << sobrenome <<  endl;

    // Inicialização de alguns elementos do array  
    int array2[100] = {
        1,
        2,
        3,

        // Só funciona em C!!
        [50] = 100 
    };
    
    for(int i = 0; i < 100; i++) {
        cout << i << " == " << array2[i] << endl;
    }
}
