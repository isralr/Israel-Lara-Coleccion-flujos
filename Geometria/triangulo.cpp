#include "geometria.h"

namespace geometria {
    Triangulo::Triangulo(double base, double altura) : base(base), altura(altura) {}

    double Triangulo::area() const {
        return (base * altura) / 2;
    }

    double Triangulo::perimetro() const {
        // Assuming an equilateral triangle for simplicity
        return 3 * base;
    }
}