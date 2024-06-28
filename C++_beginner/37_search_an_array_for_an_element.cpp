#include <iostream>

/*
 * Search An Arry For An Element: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=11587s
 */

/*
int searchArray(std::string array[], std::string element, int size);

int main() {
    std::cout << "==================== Search An Array For An Element ====================" << '\n';
    std::string foods[] = {"hamburger", "hotdog", "pizza", ""};
    int size = 0;
    std::string myFood;

    std::cout << "Enter element to search for: " << "\n";
    std::getline(std::cin, myFood);

    for (const std::string &food: foods) {
        size ++;
    }

    int index = 0;
    index = searchArray(foods, myFood, size);

    if (index != -1) {
        std::cout << myFood << " is at index " << index << "\n";
    }
    else {
        std::cout << myFood << " is not in the array.\n";
    }
    return 0;
}

int searchArray(std::string array[], const std::string element, const int size) {
    for (int index = 0; index < size; index++) {
        if (array[index] == element) {
            return index;
        }
    }
    return -1;
}
//*/