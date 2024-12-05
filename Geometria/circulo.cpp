#include "geometria.h"

namespace geometria {
    Circulo::Circulo(double radio) : radio(radio) {}

    double Circulo::area() const {
        return 3.14159265358979323846 * radio * radio;
    }

    double Circulo::perimetro() const {
        return 2 * 3.14159265358979323846 * radio;
    }
}