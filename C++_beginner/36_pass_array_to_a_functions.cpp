#include <iostream>

/*
 * Pass array to a functions: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=11316s
 */

/*
double getTotal(double prices[], int size);

int main() {
    std::cout << "==================== Pass Array To A Function ====================" << '\n';
    double prices[] = {7.00, 4.65, 7.30};
    int size = 0;
    for (const double &price: prices) {
        size++;
    }
    std::cout << getTotal(prices, size) << "\n";

    return 0;
}

double getTotal(double prices[], int size) {
    double total = 0;
    for (int price = 0; price < size; price++) {
        total += prices[price];
    }
    return total;
}
//*/
