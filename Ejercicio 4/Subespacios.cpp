#include <iostream>
namespace Ciencia {

    namespace Fisica {

        const double velocidadLuz = 299792458;

        double energia(double masa) {
            return masa * velocidadLuz * velocidadLuz;
        }
    }
    namespace Quimica {
        const double numeroAvogadro = 6.02214076e23;

    }
    namespace Biologia {
        double calcularIMC(double peso, double altura) {
            return peso / (altura * altura);
        }
    }
}
int main() {
    double masa;
    std::cout << "Introduce la masa en kilogramos (para calcular energia): ";
    std::cin >> masa;
    double energia = Ciencia::Fisica::energia(masa);
    std::cout << "La energia equivalente es: " << energia << " julios" << std::endl;

    double peso, altura;
    std::cout << "Introduce el peso en kilogramos (para calcular IMC): ";
    std::cin >> peso;
    std::cout << "Introduce la altura en metros: ";
    std::cin >> altura;
    double imc = Ciencia::Biologia::calcularIMC(peso, altura);
    std::cout << "El IMC es: " << imc << std::endl;

    return 0;

}