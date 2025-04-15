#include <iostream>
#include "calculator.h"

int main() {
    std::cout << "Add(3, 5): " << add(3, 5) << "\n";
    std::cout << "Subtract(10, 4): " << subtract(10, 4) << "\n";
    std::cout << "Multiply(6, 7): " << multiply(6, 7) << "\n";

    try {
        std::cout << "Divide(8, 2): " << divide(8, 2) << "\n";
        std::cout << "Divide(5, 0): ";
        std::cout << divide(5, 0) << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    try {
        std::cout << "Factorial(5): " << factorial(5) << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    std::cout << "GCD(36, 60): " << gcd(36, 60) << "\n";
    std::cout << "LCM(4, 6): " << lcm(4, 6) << "\n";

    try {
        std::cout << "Random number between 1 and 100: " << randomInRange(1, 100) << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}

