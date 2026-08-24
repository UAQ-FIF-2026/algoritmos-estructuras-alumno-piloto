cmake_minimum_required(VERSION 3.16)
project(algoritmos_alumno_piloto LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(promedio src/main.cpp)
target_compile_options(promedio PRIVATE -Wall -Wextra -Wpedantic -Werror)

enable_testing()
add_executable(test_promedio tests/test_promedio.cpp)
target_compile_options(test_promedio PRIVATE -Wall -Wextra -Wpedantic -Werror)
add_test(NAME promedio_tests COMMAND test_promedio)
