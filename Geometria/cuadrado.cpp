#include "geometria.h"

namespace geometria {
    Cuadrado::Cuadrado(double lado) : lado(lado) {}

    double Cuadrado::area() const {
        return lado * lado;
    }

    double Cuadrado::perimetro() const {
        return 4 * lado;
    }
}