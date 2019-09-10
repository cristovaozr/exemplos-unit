#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Retangulo {
    private:
        double base;
        double altura;

    public:
        Retangulo(double, double);
        Retangulo();
        ~Retangulo();

        double Area();
        double Perimetro();

        double getBase();
        double getAltura();
        double Hipotenusa();
};

Retangulo::Retangulo(double b, double a)
{
    base = b;
    altura = a;
}

Retangulo::Retangulo()
{
    Retangulo(1.0, 1.0);
}

Retangulo::~Retangulo() {}

double Retangulo::Area()
{
    return base*altura;
}

double Retangulo::Perimetro()
{
    return 2.0*(base + altura);
}

double Retangulo::Hipotenusa()
{
    double h2 = base*base + altura*altura;
    return sqrt(h2);
}

double Retangulo::getBase()
{
    return base;
}

double Retangulo::getAltura()
{
    return altura;
}

void printRetanguloInfo(Retangulo &r)
{
    cout << "Base: " << r.getBase() << ", Altura: " << r.getAltura() << endl;
    cout << "Area == " << r.Area() << ", Perimetro == " << r.Perimetro() << endl;
    cout << "Hipotenusa == " << r.Hipotenusa() << endl;
}

int main(int argc, char **argv)
{

    Retangulo r1(3.0, 4.0);

    printRetanguloInfo(r1);

    return 0;
}