#include <iostream>
#include <random>

/**
** Rock Paper Scissor Game: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=9484s
 */

/*
char getUserCHoice();

char getComputerChoice();

void showChoice(char choice);

void chooseWinner(char player, char computer);

int main() {
    std::cout << "==================== Rock Paper Scissor Game ====================" << '\n';
    char player = getUserCHoice();
    std::cout << "your choice: ";
    showChoice(player);


    char computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);


    return 0;
}


char getUserCHoice() {
    char player;
    do {
        std::cout << "Choose one of the following bellow:\n";
        std::cout << "r for rock\n";
        std::cout << "p for paper\n";
        std::cout << "s for scisser\n";
        std::cout << "Enter your choose: ";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');


    return player;
}

char getComputerChoice() {
    char computer_choice;
    computer_choice = std::rand() % 3 + 1;
    switch (computer_choice) {
        case 1: computer_choice = 'r';
            break;
        case 2: computer_choice = 's';
            break;
        case 3: computer_choice = 'p';
            break;
        default: std::cout << "Invalid data";
            break;
    }

    return computer_choice;
}

void showChoice(char choice) {
    switch (choice) {
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 's': std::cout << "Scissor\n";
            break;
        default: std::cout << "Invalid value\n";
            break;
    }
}

void chooseWinner(char player, char computer) {
    switch (player) {
        case 'r': if (computer == 'r') {
                std::cout << "It is a tie";
            } else if (computer == 's') {
                std::cout << "You win";
            } else if (computer == 'p') {
                std::cout << "You lose";
            }
        case 's': if (computer == 's') {
                std::cout << "It is a tie";
            } else if (computer == 'p') {
                std::cout << "You win";
            } else if (computer == 'r') {
                std::cout << "You lose";
            }
        case 'p': if (computer == 'p') {
                std::cout << "It is a tie";
            } else if (computer == 'r') {
                std::cout << "You win";
            } else if (computer == 's') {
                std::cout << "You lose";
            }
    }
}
//*/
