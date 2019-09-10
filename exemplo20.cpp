#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Poligono {
    public:
        Poligono();
        virtual ~Poligono();

        virtual double Area();
        virtual double Perimetro();
};

double Poligono::Area()
{
    return 0.0;
}

double Poligono::Perimetro()
{
    return 0.0;
}

Poligono::Poligono() {}
Poligono::~Poligono() {}

class Retangulo : public Poligono {
    private:
        double base;
        double altura;

    public:
        Retangulo(double b = 1.0, double a = 1.0);
        virtual ~Retangulo();

        virtual double Area();
        double Area(double f); // Overload de função
        virtual double Perimetro();

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

void printPoligonoInfo(Poligono &p)
{
    cout << "Area == " << p.Area() << endl;
    cout << "Perimetro == " << p.Perimetro() << endl;
}

int main()
{

    Retangulo r1(3.0, 4.0);
    Poligono p1;

    printPoligonoInfo(r1);
    printPoligonoInfo(p1);

    return 0;
}