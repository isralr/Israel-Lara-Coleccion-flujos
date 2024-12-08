cmake_minimum_required(VERSION 3.30)
project(Israel_Lara_Coleccion_flujos)

set(CMAKE_CXX_STANDARD 14)

include_directories(ciencia/matematicas)

add_executable(Israel_Lara_Coleccion_flujos
    main.cpp
        ejercicio1/generalidades.h
        ejercicio1/generalidades.cpp
        ejercicio2/flujos_integrados.h
        ejercicio2/flujos_integrados.cpp
        ejercicio3/estado_flujo.cpp
)
