#include "calculator.h"
#include <stdexcept>
#include <random>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0)
        throw std::invalid_argument("Division by zero!");
    return static_cast<double>(a) / b;
}

int factorial(int n) {
    if (n < 0)
        throw std::invalid_argument("Factorial of a negative number!");
    int result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    if (a == 0 || b == 0)
        return 0;
    return (a * b) / gcd(a, b);
}

int randomInRange(int min, int max) {
    if (min > max)
        throw std::invalid_argument("Invalid range!");
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(min, max);
    return distr(gen);
}

