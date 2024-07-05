#include<iostream>
#include <ctime>

/*
 * tic tac toe gamme: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=16037s
 */
void drawBoard(const char *space);

void playerChoicea(char *space, char player);

void computerChoicea(char *space, char computer);

bool checkWinner(const char *space, char player);

bool checkTie(char *space);

int main() {
    char space[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    drawBoard(space);

    do {
        playerChoicea(space, player);
        if (checkWinner(space, player)) {
            running = false;
            break;
        }

        computerChoicea(space, computer);
        drawBoard(space);
        if (checkWinner(space, player)) {
            running = false;
            break;
        }
    } while (running);
    drawBoard(space);
}

void drawBoard(const char *space) {
    std::cout << "     |     |     \n";
    std::cout << "  " << space[0] << "  |  " << space[1] << "  |  " << space[2] << "  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << space[3] << "  |  " << space[4] << "  |  " << space[5] << "  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << space[6] << "  |  " << space[7] << "  |  " << space[8] << "  \n";
    std::cout << "     |     |     \n";
}

void playerChoicea(char *space, const char player) {
    int location;
    bool full = true;

    do {
        std::cout << "Where do you want to put your marker on ( 1 - 9 )";
        std::cin >> location;
        location--;

        if (space[location] == ' ') {
            space[location] = player;
            full = false;
        }
    } while(full);
}

void computerChoicea(char *space, const char computer) {
    int number;
    srand(time(nullptr));

    while(true) {
        number = rand() % 9;
        if(space[number] == ' ') {
            space[number] = computer;
            break;
        }
    }
}

bool checkWinner(const char *space, const char player) {
    if(space[0] == space[1] && space[1] == space[2] && space[0] != ' ') {
        space[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if(space[3] == space[4] && space[4] == space[5] && space[3] != ' ') {
        space[3] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if(space[6] == space[7] && space[7] == space[8] && space[6] != ' ') {
        space[6] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if(space[0] == space[3] && space[3] == space[6] && space[0] != ' ') {
        space[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if(space[1] == space[4] && space[4] == space[7] && space[1] != ' ') {
        space[1] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if(space[2] == space[5] && space[5] == space[8] && space[2] != ' ') {
        space[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if(space[0] == space[4] && space[4] == space[8] && space[0] != ' ') {
        space[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if(space[2] == space[4] && space[4] == space[6] && space[2] != ' ') {
        space[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else {
        return false;
    }
    return true;
}

bool checkTie(char *space) {

    return true;
}
