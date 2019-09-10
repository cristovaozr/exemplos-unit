#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Retangulo {
    private:
        double base;
        double altura;

    public:
        Retangulo(double b = 1.0, double a = 1.0);
        ~Retangulo();

        double Area();
        double Area(double f); // Overload de função
        double Perimetro();

        double getBase();
        double getAltura();
        double Hipotenusa();

        // a > b
        bool operator> (Retangulo &b);
        bool operator< (Retangulo &b);
        bool operator== (Retangulo &b);
};

bool Retangulo::operator>(Retangulo &b)
{
    double a1, a2;

    a1 = Area();
    a2 = b.Area();

    return a1 > a2;
}

bool Retangulo::operator<(Retangulo &b)
{
    double a1, a2;

    a1 = Area();
    a2 = b.Area();

    return a1 < a2;
}

bool Retangulo::operator==(Retangulo &b)
{
    double a1, a2;

    a1 = Area();
    a2 = b.Area();

    return a1 == a2;
}

Retangulo::Retangulo(double b, double a)
{
    base = b;
    altura = a;
}

Retangulo::~Retangulo() {}

double Retangulo::Area()
{
    return base*altura;
}

double Retangulo::Area(double f)
{
    if(f > 0.0 && f < 1.0) {
        return Area() * f;
    } else {
        return 0.0;
    }
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
    cout << "Area com fator == " << r.Area(0.7) << endl;
}

int main(int argc, char **argv)
{

    Retangulo r1(3.0, 4.0);

    printRetanguloInfo(r1);

    Retangulo r2;

    printRetanguloInfo(r2);

    cout << "r1 > r2 == " << (r1 > r2) << endl; // true
    cout << "r1 < r2 == " << (r1 < r2) << endl; // false
    cout << "r1 == r2 == " << (r1 == r2) << endl; // false
    cout << "r1 == r1 == " << (r1 == r1) << endl; // true

    return 0;
}