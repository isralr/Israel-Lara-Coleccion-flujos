#include <iostream>
#include "ciencias/generalidades.h"
#include "ciencias/flujos_integrados.h"
#include "matematicas/estado_flujo.h"
#include "matematicas/formato.h"
#include "matematicas/flujo_archivos.h"
#include "matematicas/flujo_cadenas.h"
#include "matematicas/argumentos_locales.h"

int main(int argc, char* argv[]) {
    int opcion;

    do {
        std::cout << "\n=== MENÚ DE EJERCICIOS ===\n";
        std::cout << "1. Generalidades\n";
        std::cout << "2. Flujos Integrados\n";
        std::cout << "3. Estado de un Flujo\n";
        std::cout << "4. Formato\n";
        std::cout << "5. Flujo de Archivos\n";
        std::cout << "6. Flujo de Cadenas\n";
        std::cout << "7. Argumentos Locales\n";
        std::cout << "0. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cin.ignore(); // Limpia el buffer para getline

        switch (opcion) {
            case 1: ejecutarEjercicioGeneralidades(); break;
            case 2: ejecutarEjercicioFlujosIntegrados(); break;
            case 3: ejecutarEjercicioEstadoFlujo(); break;
            case 4: ejecutarEjercicioFormato(); break;
            case 5: ejecutarEjercicioFlujoArchivos(); break;
            case 6: ejecutarEjercicioFlujoCadenas(); break;
            case 7: ejecutarEjercicioArgumentosLocales(argc, argv); break;
            case 0: std::cout << "Saliendo del programa.\n"; break;
            default: std::cout << "Opción no válida.\n";
        }
    } while (opcion != 0);

    return 0;
}


