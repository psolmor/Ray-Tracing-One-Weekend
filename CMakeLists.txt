cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(RayTracingOneWeekend)


# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Añadir el ejecutable
add_executable(RayTracingOneWeekend src/main.cc)