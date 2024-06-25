#include <iostream>
/**
 ** Banking_program: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=8651s
 */

void showBalance(double balance1);

double deposit();

double withdraw(double balance);

int main() {
    double balance = 0;
    int choice = 0;

    do {
        std::cout << "*****************\n";
        std::cout << "Enter your choice\n";
        std::cout << "*****************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw(balance);
                break;
            case 4:
                break;
            default:
                std::cout << "Choice invalid";
        }
    } while (choice != 4);

    return 0;
}


void showBalance(double balance) {
    std::cout << "Your balance is: $" << balance << "\n";
}

double deposit() {
    double amount = 0;

    std::cout << "Enter amount to be deposited; ";
    std::cin >> amount;
    if (amount > 0) {
        return amount;
    } else {
        std::cout << "That's not a valid amount: ";
        return 0;
    }
}

double withdraw(double balance) {
}
