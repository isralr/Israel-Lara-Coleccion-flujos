#include "geometria.h"
#include <cmath>

namespace geometria {
    Circulo::Circulo(double radio) : radio(radio) {}

    double Circulo::area() const {
        return M_PI * radio * radio;
    }

    double Circulo::perimetro() const {
        return 2 * M_PI * radio;
    }
}