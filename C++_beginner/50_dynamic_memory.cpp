#include<iostream>

int main() {

    char *pGrades = nullptr;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i ++) {
        std::cout << "What is the #" << i << " Grade?:";
        std::cin >> pGrades[i];
    }

    std::cout << "\n";

    std::cout << "Address: " << &pGrades << "\n";
    std::cout << "Value: ";

    for(int i = 0; i < size; i++) {
        std::cout << pGrades[i] << ' ';
    }
    std::cout << "\n";

    delete pGrades;

    return 0;
}