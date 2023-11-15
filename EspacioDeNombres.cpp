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

    double division(double a, double b) {
        if(b != 0) {
            return a / b;
        } else {
            cout << "No se puede dividir entre 0" << endl;
            return 0;
        }
    }
    double logaritmo(double a) {
        if(a > 0) {
            return log(a);
        } else {
            cout << "No se puede calcular el logaritmo de un numero que es negativo" << endl;
            return 0;
        }
    }
}

int main() {
    int numero1 = 20;
    int numero2 = 9;

    int solucion_suma = matematicas::suma(numero1, numero2);
    int solucion_resta = matematicas::resta(numero1, numero2);
    int resultado_multiplicacion = matematicas::multiplicacion(numero1, numero2);
    double resultado_division = matematicas::division(numero1, numero2);
    double resultado_logaritmo = matematicas::logaritmo(numero1);

    cout << "La solucion de la suma es: " << solucion_suma << endl;
    cout << "La solucion de la resta es: " << solucion_resta << endl;
    cout << "La solucion de la multiplicacion es: " << resultado_multiplicacion << endl;
    cout << "La solucion de la division es: " << resultado_division << endl;
    cout << "La solucion del logaritmo es: " << resultado_logaritmo << endl;

    return 0;


}