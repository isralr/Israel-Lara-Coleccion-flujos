cmake_minimum_required(VERSION 3.30)
project(Israel_Lara_Coleccion_flujos)

set(CMAKE_CXX_STANDARD 14)

include_directories(ciencia/matematicas)

add_executable(Israel_Lara_Coleccion_flujos
        ciencia/matematicas/matematicas.cpp
        ciencia/matematicas/matematicas.h
    main.cpp
        Geometria/geometria.h
        Geometria/triangulo.cpp
        Geometria/circulo.cpp
        Geometria/cuadrado.cpp
        ciencia/fisica/fisica.cpp
        ciencia/fisica/fisica.h
        ciencia/ciencia.cpp
        ciencia/ciencia.h)
