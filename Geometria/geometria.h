#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace geometria {
    class Cuadrado {
    public:
        Cuadrado(double lado) : lado(lado) {}

        double area() const {
            return lado * lado;
        }

        double perimetro() const {
            return 4 * lado;
        }

    private:
        double lado;
    };
}

#endif // GEOMETRIA_H