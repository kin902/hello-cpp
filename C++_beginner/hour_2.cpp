//
// Created by Quay Kin on 22/6/24.
//

#include <iostream>
#include <cmath>
#include <ctime>





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
    std::cout << "==================== While Loop ====================" << '\n';
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
