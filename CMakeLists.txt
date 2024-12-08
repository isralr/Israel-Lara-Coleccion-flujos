cmake_minimum_required(VERSION 3.30)
project(Israel_Lara_Coleccion_flujos)

set(CMAKE_CXX_STANDARD 14)

include_directories(ciencia/matematicas)

add_executable(Israel_Lara_Coleccion_flujos
    main.cpp
        ciencias/flujos_integrados.cpp
        ciencias/flujos_integrados.h
        ciencias/generalidades.cpp
        ciencias/generalidades.h
        matematicas/argumentos_locales.cpp
        matematicas/argumentos_locales.h
        matematicas/estado_flujo.cpp
        matematicas/estado_flujo.h
        matematicas/flujo_archivos.cpp
        matematicas/flujo_archivos.h
        matematicas/flujo_cadenas.cpp
        matematicas/flujo_cadenas.h
        matematicas/formato.cpp
        matematicas/formato.h)
