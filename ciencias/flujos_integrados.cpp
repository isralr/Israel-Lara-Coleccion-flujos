#include <iostream>
#include <string>
#include "flujos_integrados.h"

void ejecutarEjercicioFlujosIntegrados() {
    int num;
    std::string text;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cin.ignore(); // Limpia el buffer para getline
    std::cout << "Ingresa un texto: ";
    std::getline(std::cin, text);
    std::cout << "El número ingresado es: " << num << "\nEl texto ingresado es: " << text << std::endl;
}
