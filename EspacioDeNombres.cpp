#include <iostream>
#include <cmath>

using namespace std;
namespace matematicas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }

    int multiplicacion(int a, int b) {
        return a * b;
    }
}

int main() {
    int numero1 = 20;
    int numero2 = 9;

    int solucion_suma = matematicas::suma(numero1, numero2);
    int solucion_resta = matematicas::resta(numero1, numero2);

    cout << "La solucion de la suma es: " << solucion_suma << endl;
    cout << "La solucion de la resta es: " << solucion_resta << endl;

    return 0;


}