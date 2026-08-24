#define UNIT_TEST
#include "../src/main.cpp"

#include <cassert>
#include <cmath>
#include <vector>

int main() {
    assert(calcularPromedio({}) == 0.0);
    assert(std::abs(calcularPromedio({10.0}) - 10.0) < 1e-9);
    assert(std::abs(calcularPromedio({8.0, 9.0, 10.0}) - 9.0) < 1e-9);
    return 0;
}
