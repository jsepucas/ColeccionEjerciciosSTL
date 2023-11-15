#include <iostream>

namespace matematicas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }
}

int main() {
    int numero1 = 20;
    int numero2 = 5;

    int solucion_suma = matematicas::suma(numero1, numero2);
    int solucion_resta = matematicas::resta(numero1, numero2);
}