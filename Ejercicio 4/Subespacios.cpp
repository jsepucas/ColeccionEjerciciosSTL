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
int main() {
    double masa;
    std::cout << "Introduce la masa en kilogramos: ";
    std::cin >> masa;
    double energia = Ciencia::Fisica::energia(masa);

    std::cout << "La energía equivalente es: " << energia << " julios" << std::endl;

    return 0;
}
