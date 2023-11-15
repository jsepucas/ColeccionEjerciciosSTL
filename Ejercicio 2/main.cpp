#include <iostream>
#include "circulo.cpp"
#include "triangulo.cpp"
#include "hexagono.cpp"
#include "cuadrado.cpp"
#include "rectangulo.cpp"

int main() {
    double radioCirculo = 6;
    double baseTriangulo = 4;
    double alturaTriangulo = 5;
    double ladoHexagono = 8;
    double ladoCuadrado = 7;
    double largoRectangulo = 10;
    double anchoRectangulo = 5;

    double areaCirculo = Geometria::Area_circulo(radioCirculo);
    double areaTriangulo = Geometria::Area_triangulo(baseTriangulo, alturaTriangulo);
    double areaHexagono = Geometria::Area_hexagono(ladoHexagono);
    double areaCuadrado = Geometria::Area_cuadrado(ladoCuadrado);
    double areaRectangulo = Geometria::Area_rectangulo(largoRectangulo, anchoRectangulo);

    std::cout << "Área del círculo: " << areaCirculo << std::endl;
    std::cout << "Área del triángulo: " << areaTriangulo << std::endl;
    std::cout << "Área del hexágono: " << areaHexagono << std::endl;
    std::cout << "Área del cuadrado: " << areaCuadrado << std::endl;
    std::cout << "Área del rectángulo: " << areaRectangulo << std::endl;
}