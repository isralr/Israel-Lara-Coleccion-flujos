#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace geometria {
    class Cuadrado {
    public:
        Cuadrado(double lado);
        double area() const;
        double perimetro() const;

    private:
        double lado;
    };

    class Circulo {
    public:
        Circulo(double radio);
        double area() const;
        double perimetro() const;

    private:
        double radio;
    };

    class Triangulo {
    public:
        Triangulo(double base, double altura);
        double area() const;
        double perimetro() const;

    private:
        double base;
        double altura;
    };
}

#endif // GEOMETRIA_H