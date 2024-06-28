#include <iostream>

/**
** Temperature Conversion Program: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=5035s
 */

/*
int main() {
    std::cout << "==================== Temperature Conversion Program ====================" << '\n';
    int temp;
    char unit;

    std::cout << "C = Celsius\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        std::cout << "Temperature is: " << (1.8 * temp) + 32.0 << "F\n";
    } else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        std::cout << "Temperature is: " << (temp - 31) / 1.8 << "C\n";
    }
    return 0;
}
//*/