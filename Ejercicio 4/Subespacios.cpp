#include <iostream>

namespace Ciencia {

    namespace Fisica {

        const double velocidadLuz = 299792458;

        double energia(double masa) {
            return masa * velocidadLuz * velocidadLuz;
        }
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
