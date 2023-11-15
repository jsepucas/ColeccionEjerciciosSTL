#include <iostream>
#include "circunferencia.cpp"
#include "decagono.cpp"
#include "heptagono.cpp"

using namespace std;

int main() {
    Geometria::Circulo c(5);
    cout << "Area del circulo: " << c.calcularArea() << endl;
    cout << "Perimetro del circulo: " << c.calcularPerimetro() << endl;
    Geometria::Heptagono h(5);
    cout << "Area del heptagono: " << h.calcularArea() << endl;
    cout << "Perimetro del heptagono: " << h.calcularPerimetro() << endl;
    Geometria::Decagono d(5, 6);
    cout << "Area del decagono: " << d.calcularArea() << endl;
    cout << "Perimetro del decagono: " << d.calcularPerimetro() << endl;

}
