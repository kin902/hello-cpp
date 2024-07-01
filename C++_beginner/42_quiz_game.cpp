#include <iostream>

/*
 * quiz game: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=13557s
 */

/*
int main() {
    std::string questions[] = {
        "1. What year was C++ created?: ",
        "2. Who invented C++?: ",
        "3. What is the predecessor of C++?: ",
        "4. Is the Earth flat?: "
    };
    std::string options[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
        {"A. C", "B. C+", "C. C--", "D. B++"},
        {"A. yes", "B. no", "C. sometimes", "D. what's Earth"}
    };

    char answerKey[] = {'C', 'B', 'A', 'B'};
    int questions_len = 0;
    questions_len = sizeof(questions) / sizeof(std::string);
    char choice;
    int correct_question = 0;

    std::cout << questions_len << "\n";
    for(int i = 0; i < questions_len; i++) {
        std::cout << questions[i] << "\n";
        for (int o = 0; o < sizeof(options[i]) / sizeof(std::string); o++) {
            std::cout << options[i][o] << "\n";
        }
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        choice = toupper(choice);

        if(choice == answerKey[i]) {
            correct_question++ ;
            std::cout << "CORRECT!\n";
        }
        else {
            std::cout << "WRONG!\n";
        }
        std::cout << "The correct answer is " << answerKey[i] << "\n";

        std::cout << "\n";
    }
    std::cout << "**********************************\n";
    std::cout << "              RESULT              \n";
    std::cout << "**********************************\n";
    std::cout << "Correct: " << correct_question << "/" << questions_len << "\n";
    std::cout << "With a " << correct_question * 100 / questions_len << "%";
    return 0;
}
//*/
