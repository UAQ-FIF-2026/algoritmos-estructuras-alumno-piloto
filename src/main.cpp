#include <iostream>
#include <vector>

double calcularPromedio(const std::vector<double>& calificaciones) {
    if (calificaciones.empty()) {
        return 0.0;
    }

    double suma = 0.0;
    for (double calificacion : calificaciones) {
        suma += calificacion;
    }
    return suma / static_cast<double>(calificaciones.size());
}

#ifndef UNIT_TEST
int main() {
    std::size_t cantidad = 0;
    std::cout << "Numero de calificaciones: ";
    std::cin >> cantidad;

    std::vector<double> calificaciones(cantidad);
    for (double& calificacion : calificaciones) {
        std::cout << "Calificacion: ";
        std::cin >> calificacion;
    }

    std::cout << "Promedio: " << calcularPromedio(calificaciones) << '\n';
    return 0;
}
#endif
