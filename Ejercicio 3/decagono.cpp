namespace Geometria {
    class Decagono {
    private:
        double lado1;
        double lado2;
    public:
        Decagono(double lado1, double lado2) : lado1(lado1), lado2(lado2) {}
        double calcularArea() {
            return lado1 * lado2;
        }
        double calcularPerimetro() {
            return 10 * lado1;
        }
    };
}