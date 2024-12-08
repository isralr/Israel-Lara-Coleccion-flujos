#include <iostream>
#include <fstream>

void ejecutarEjercicioFlujoArchivos() {
    std::string text;
    std::cout << "Ingresa un texto: ";
    std::cin.ignore(); // Limpia el buffer
    std::getline(std::cin, text);

    std::ofstream file("example.txt");
    if (file) {
        file << text;
        std::cout << "El texto se guardó correctamente.\n";
    } else {
        std::cerr << "No se pudo abrir el archivo.\n";
    }
    file.close();
}
