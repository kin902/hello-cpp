//
// Created by Quay Kin on 22/6/24.
//

#include <iostream>
#include <cmath>

/**
 * Arithmetic operators https://www.youtube.com/watch?v=-TkoO8Z07hI&t=2259s
 */
void arithmeticOperators() {
    std::cout << "==================== Arithmetic Operators ====================" << '\n';
    int students = 20;

    students = students + 1;
    students += 3;
    students++;
    std::cout << students << '\n';

    students -= 4;
    students--;
    std::cout << students << '\n';

    students /= 2;
    std::cout << students << '\n';

    students *= 5;
    std::cout << students << '\n';
}

/**
 * Type conversion https://www.youtube.com/watch?v=-TkoO8Z07hI&t=2598s
 */
void typeConversion() {
    std::cout << "==================== Type conversion ====================" << '\n';
    //Convert ưhile creating the vảiable
    // Int convert into char
    char x = 100;
    std::cout << x << "\n";
    // The number present a characters the table to convert:
    // https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

    // Convert ehilr doing some math
    int correct = 8;
    int questions = 10;
    double percent_correct = correct / (double) questions * 100;

    std::cout << percent_correct << "%" << "\n";
}

/**
 ** User input: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=2825s
 */
void userInput() {
    std::cout << "==================== User Input ====================" << '\n';
    // cout: ( output )
    // cin: ( characters input )
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;
    std::cout << "What's your name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old\n";
}

/**
 ** Useful math related functions: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=3155s
 */
void usefulmathfunctions() {
    std::cout << "==================== Useful Math Functions ====================" << '\n';
    double a = 4.12;
    double b = -3.52;
    double c;

    //c = std::max(a, b);
    //c = std::min(a, b);
    //c = std::abs(b);
    //c = std::pow(a, b);
    //c = std::sqrt(9);
    //c = std::round(a);
    //c = std::ceil(a);
    //c = std::floor(a);

    std::cout << c << "\n";
}

/**
 ** Hypotenuse calculator program: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=3363s
 */
void hypotenuseCalculatorProgram() {
    std::cout << "==================== Hypotenuse Calculator Program ====================" << '\n';
    double d;
    double e;
    double f;

    std::cout << "Enter size a: ";
    std::cin >> d;

    std::cout << "Enter size b: ";
    std::cin >> e;

    d = pow(d, 2);
    e = pow(e, 2);
    f = sqrt(d + e);

    std::cout << "Side C: " << f;
}

/**
 ** If Statements: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=3524s
 */
void ifStatements() {
    std::cout << "==================== If Statements ====================" << '\n';
    int age_1;
    std::cout << "Enter your age: ";
    std::cin >> age_1;

    if (age_1 >= 100) {
        std::cout << "You are too old to enter this site!";
    } else if (age_1 <= 0) {
        std::cout << "You haven't been born yet!";
    } else if (age_1 >= 18) {
        std::cout << "Welcome to the site!";
    } else {
        std::cout << "You are not ole enough to enter!";
    }
}

/**
 * C++ tutorial for beginners https://www.youtube.com/playlist?list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on
 * C++ Full Course for free https://www.youtube.com/watch?v=-TkoO8Z07hI
 *
 *

int main() {
    std::string like = "I like C++!";
    std::string feel {"It's really good!"};

    std::cout << like << '\n';
    std::cout << feel << '\n';

    variable();
    constant();
    nameSpace();
    typeDef();
    arithmeticOperators();
    typeConversion();
    userInput();
    usefulmathfunctions();
    hypotenuseCalculatorProgram();
    ifStatements();

    return 0;
}
*/
