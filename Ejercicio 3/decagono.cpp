namespace Geometria {
    class decagono {
    private:
        double lado1;
        double lado2;
    public:
        decagono(double lado1, double lado2) : lado1(lado1), lado2(lado2) {}
        double area() {
            return lado1 * lado2;
        }
    };
}