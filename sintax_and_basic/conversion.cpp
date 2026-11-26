#include <iostream>

int main() {
    int number = 10;

    // Conversão implícita de int para double
    double result = number;

    std::cout << result << std::endl; // 10

    double number2 = 10.75;

    // Conversão explícita de double para int
    int result2 = static_cast<int>(number2);

    std::cout << result2 << std::endl; // 10

    return 0;
}