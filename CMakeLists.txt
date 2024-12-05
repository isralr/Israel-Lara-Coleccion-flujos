cmake_minimum_required(VERSION 3.30)
project(Israel_Lara_Coleccion_flujos)

set(CMAKE_CXX_STANDARD 14)

include_directories(matematicas)

add_executable(Israel_Lara_Coleccion_flujos
    matematicas/matematicas.cpp
    matematicas/matematicas.h
    main.cpp)
