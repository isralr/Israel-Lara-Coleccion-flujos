#include <iostream>
#include "matematicas/matematicas.h"
#include "geometria/geometria.h"

int main() {
    int num;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "El número ingresado es: " << num << std::endl;

    matematicas::Matematicas mat;
    std::cout << "Suma de 3 y 4: " << mat.sumar(3, 4) << std::endl;
    std::cout << "Resta de 3 y 4: " << mat.restar(3, 4) << std::endl;

    geometria::Cuadrado cuadrado(5.0);
    std::cout << "Área del cuadrado: " << cuadrado.area() << std::endl;
    std::cout << "Perímetro del cuadrado: " << cuadrado.perimetro() << std::endl;

    geometria::Circulo circulo(3.0);
    std::cout << "Área del círculo: " << circulo.area() << std::endl;
    std::cout << "Perímetro del círculo: " << circulo.perimetro() << std::endl;

    geometria::Triangulo triangulo(4.0, 3.0);
    std::cout << "Área del triángulo: " << triangulo.area() << std::endl;
    std::cout << "Perímetro del triángulo: " << triangulo.perimetro() << std::endl;

    return 0;
}