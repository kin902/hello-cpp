#include<iostream>

/*
 * Pointers: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=15476s
 */

/*
int main() {
    // Pointers = variable that store a memory address of another variable
    //            sometimes it's seasier to work with an address

    // &: address of operator
    // *: dereference operator

    std::string name = "Bro";
    int age = 12;
    std::string freePizza[3] = {"Pizza1", "Pizza2", "Pizza3"};

    std::string *aName = &name;
    int *aAge = &age;
    std::string *aFreePizza = freePizza;

    // Cout address of another variable
    std::cout << aName << "\n";
    std::cout << aAge << "\n";
    std::cout << aFreePizza << "\n";
    std::cout << "\n";

    // Cout value of that address
    std::cout << *aName << "\n";
    std::cout << *aAge << "\n";
    std::cout << *aFreePizza << "\n";

    return 0;
}
//*/
