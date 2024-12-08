#include <iostream>
#include <iomanip>

void ejecutarEjercicioFormato() {
    double num;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "El número ingresado es: " << std::fixed << std::setprecision(2) << num << std::endl;
}
