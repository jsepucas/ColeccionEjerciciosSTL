#include <iostream>
#include "circunferencia.cpp"
#include "decagono.cpp"
#include "heptagono.cpp"

using namespace std;

int main() {
    Geometria::Circulo c(5);
    cout << "Area del circulo: " << c.calcularArea() << endl;
    cout << "Perimetro del circulo: " << c.calcularPerimetro() << endl;


}
