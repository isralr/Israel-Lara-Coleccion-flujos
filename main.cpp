#include <iostream>
#include "matematicas/matematicas.h"

int main() {
    int num;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "El número ingresado es: " << num << std::endl;

    matematicas::Matematicas mat;
    std::cout << "Suma de 3 y 4: " << mat.sumar(3, 4) << std::endl;
    std::cout << "Resta de 3 y 4: " << mat.restar(3, 4) << std::endl;

    return 0;
}