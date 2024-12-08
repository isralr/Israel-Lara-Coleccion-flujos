#include <iostream>
#include <fstream>

void ejecutarEjercicioEstadoFlujo() {
    std::ifstream file("example.txt");
    if (!file) {
        std::cerr << "No se pudo abrir el archivo.\n";
    } else {
        std::cout << "El archivo se abrió correctamente.\n";
    }
    file.close();
}
