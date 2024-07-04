#include <iostream>

/*
 * const parameters: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=14687s
 */

void profile(const std::string name, const int age);

int main() {
    std::string name = "Bro";
    int age = 12;
    profile(name, age);
}

void profile(const std::string name, const int age) {
    std::cout << "Hello " << name << ", you are " << age << " years old.\n";
}
