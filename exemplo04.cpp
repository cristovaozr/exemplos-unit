// Example program
#include <iostream>
#include <string>

using namespace std;

#define LINHA_MAGICA(x) cout << "Tamanho de " #x ": " << sizeof(x) << endl

int main()
{
    cout << "Tipos basicos" << endl;
    LINHA_MAGICA(bool);
    LINHA_MAGICA(char);
    LINHA_MAGICA(short);
    LINHA_MAGICA(int);
    LINHA_MAGICA(long);
    LINHA_MAGICA(long long);
    LINHA_MAGICA(float);
    LINHA_MAGICA(double);
    LINHA_MAGICA(void *);
}
