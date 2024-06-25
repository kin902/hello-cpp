//
// Created by Quay Kin on 22/6/24.
//

#include <iostream>
#include <cmath>
#include <ctime>
/**
 ** Switches: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=3820s
 */
void switches() {
    std::cout << "==================== Switches ====================" << '\n';
    int month;
    std::cout << "Enter a month from 1 - 12: ";
    std::cin >> month;

    switch (month) {
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break;
        default:
            std::cout << "Please enter in only numbers (1 - 12";
    }
}

/**
 ** calculatorprogram: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=4169s
 */
void calculatorprogram() {
    std::cout << "==================== If Statements ====================" << '\n';
    char op;
    double num_1;
    double num_2;
    double result;

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter first number: ";
    std::cin >> num_1;

    std::cout << "Enter second number: ";
    std::cin >> num_2;

    switch (op) {
        case '+':
            result = num_1 + num_2;
            std::cout << "Result: " << result;
            break;
        case '-':
            result = num_1 - num_2;
            std::cout << "Result: " << result;
            break;
        case '*':
            result = num_1 * num_2;
            std::cout << "Result: " << result;
            break;
        case '/':
            result = num_1 / num_2;
            std::cout << "Result: " << result;
            break;
        default:
            std::cout << "That wasn;t a valid response\n";
            break;
    }
}

/**
 ** ternary operator: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=4169s
 */
void ternaryOperator() {
    std::cout << "==================== Ternary Operator ====================" << '\n';
    int grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;
    grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail!\n";
    // or
    std::cout << (grade >= 60 ? "You pass!\n" : "You fail!\n");
}

/**
 ** Logical Operators: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=4733s
 */
void logicalOperators() {
    std::cout << "==================== Logical Operators ====================" << '\n';
    /* || = check if at least one of two conditions is true
     * && = check if two conditions are true
     * !  = reverses the logical state of the operand
     */
    int temperature;

    std::cout << "Enter the temperature: ";
    std::cin >> temperature;

    if (temperature <= 0 || temperature >= 30) {
        std::cout << "The temperature is bad\n";
    } else {
        std::cout << "The temperature is good\n";
    }
}

/**
 ** Temperature Conversion Program: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=5035s
 */
void temperatureConversionProgram() {
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
}

/**
 ** useful string method: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=5357s
 */
void usefulStringMethod() {
    std::cout << "==================== Useful String Method ====================" << '\n';
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;;

    if (name.length() > 12) {
        std::cout << "your name can't be over 12 characters";
    } else {
        std::cout << "welcome " << name << "\n";
    }
}

/**
 ** while loop: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=5751s
 */
void whileLoop() {
    std::cout << "==================== Useful String Method ====================" << '\n';
    int number;
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);
}

/**
 ** for loop:https://www.youtube.com/watch?v=-TkoO8Z07hI&t=6135s
 */
void forLoop() {
    std::cout << "==================== For Loop ====================" << '\n';
    for (int index = 10; index >= 0; index--) {
        std::cout << index << "\n";
    }
    std::cout << "HAPPY NEW YEAR!!!";
}

/**
 ** Breaks & Continues; https://www.youtube.com/watch?v=-TkoO8Z07hI&t=6353s
 */
void breakCcontinues() {
    std::cout << "==================== Breaks & Continues ====================" << '\n';
    // Break = break out of a loop
    // continue = skip current iteration
    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            continue;
        }
        std::cout << i << "\n";
    }
}

/**
 ** random Generator:https://www.youtube.com/watch?v=-TkoO8Z07hI&t=6711s
 */
void randomGenerator() {
    std::cout << "==================== random Generator ====================" << '\n';
    srand(time(NULL));
    int num = rand() % 6 + 1;
    std::cout << num << "\n";
}

/**
 ** fuction: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=7390s
 */
void fuction() {
    std::cout << "==================== Function ====================" << '\n';
    double square(double length);

    double length = 6.0;
    double result = square(length);

    std::cout << result << "\n";
}

double square(double length) {
    return length * length;
}

/**
 * C++ tutorial for beginners https://www.youtube.com/playlist?list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on
 * C++ Full Course for free https://www.youtube.com/watch?v=-TkoO8Z07hI
 *
 */
/*
int main() {
    std::string like = "I like C++!";
    std::string feel {"It's really good!"};

    std::cout << like << '\n';
    std::cout << feel << '\n';

    // switches();
    // calculatorprogram();
    // ternaryOperator();
    // logicalOperators();
    // temperatureConversionProgram();
    // usefulStringMethod();
    // whileLoop();
    // forLoop();
    breakCcontinues();
    randomGenerator();
    fuction();
    return 0;
}
*/
