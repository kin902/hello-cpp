#include<iostream>

/*
 * fill function: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=12397s
 */

/*
int main() {
    std::cout << "==================== Fill Function ====================" << '\n';
    const int SIZE = 99;
    std::string foods[SIZE];

    std::fill(foods, foods + (SIZE / 3), "pizza");
    std::fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "hamburger");
    std::fill(foods + (SIZE / 3) * 2, foods + SIZE, "hotdog");

    for(std::string food: foods) {
        std::cout << food << "\n";
    }
}
//*/