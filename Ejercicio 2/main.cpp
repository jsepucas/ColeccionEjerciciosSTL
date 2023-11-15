#include <iostream>
#include <cmath>
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

    double areaCirculo = Geometria::area_circulo(radioCirculo);
    double areaTriangulo = Geometria::area_triangulo(baseTriangulo, alturaTriangulo);
    double areaHexagono = Geometria::area_hexagono(ladoHexagono);
    double areaCuadrado = Geometria::area_cuadrado(ladoCuadrado);
    double areaRectangulo = Geometria::area_rectangulo(largoRectangulo, anchoRectangulo);

    std::cout << "Area del circulo: " << areaCirculo << std::endl;
    std::cout << "Area del triangulo: " << areaTriangulo << std::endl;
    std::cout << "Area del hexagono: " << areaHexagono << std::endl;
    std::cout << "Area del cuadrado: " << areaCuadrado << std::endl;
    std::cout << "Area del rectangulo: " << areaRectangulo << std::endl;

    return 0;
}