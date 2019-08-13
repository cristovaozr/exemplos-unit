// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int condicao = 3;
    // if
    if(condicao == 0) {
        // executa se 0
        cout << "condicao eh zero!" << endl;
    } else if (condicao == 1) {
        // executa se 1
        cout << "condicao eh um!" << endl;
    } else {
        // executa caso contrário
        cout << "caso contrario" << endl;
    }
    
    // switch-case
    switch(condicao) {
        case 0:
            cout << "foi zero" << endl;
            break;
        
        case 1:
            cout << "agora foi um" << endl;
            break;
        
        default:
            cout << "nenhum deles!" << endl;
            break;
    }
    cout << "Laco for" << endl;
    // laço for
    for (int i = 0, j = 15; i < 10; i++, j-=3) {
        cout << "i == " << i << ", j == " << j << endl;
    }
    cout << "Laco while" << endl;
    // laço while
    int i = 0, j = 15;
    while(i < 10) {
        cout << "i == " << i << ", j == " << j << endl;
        i++; j -= 3;
    }
    
    cout << "Laco do-while" << endl;
    // laço do-while
    i = 0; j = 15;
    do {
        cout << "i == " << i << ", j == " << j << endl;
        i++; j -= 3;
    } while(i < 10);
    
}
