// main.cpp
#include <iostream>
#include "calculate.h"

int main() {
    double x, y, z;

    // Введення значень користувачем
    std::cout << "Enter value for x: ";
    std::cin >> x;
    std::cout << "Enter value for y: ";
    std::cin >> y;
    std::cout << "Enter value for z: ";
    std::cin >> z;

    // Обчислення результату
    double w = calculate_w(x, y, z);

    // Виведення результату
    PRINT_RESULT(w);

    return 0;
}
