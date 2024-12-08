#include <iostream>
#include <fstream>

void ejecutarEjercicioArgumentosLocales(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Por favor, proporciona un argumento de texto.\n";
        return;
    }

    std::ofstream file("example.txt");
    if (file) {
        file << argv[1];
        std::cout << "El texto se guardó correctamente.\n";
    } else {
        std::cerr << "No se pudo abrir el archivo.\n";
    }
    file.close();
}
