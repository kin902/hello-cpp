#include <iostream>

/*
 * Fill An Array With User Input: https://www.youtube.com/watch?v=-TkoO8Z07hI&t=12679s
 */

/*
int main() {
    std::string user_input;
    std::string foods[20];
    int times = 0;

    while(user_input != "q" && user_input != "q" && times != 20) {
        std::cout << "What is your #" << times << "? or q to quit:";
        std::cin >> user_input;
        if(user_input != "q") {
            foods[times] = user_input;
            times ++;
        }
    }

    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << "\n";
    }
    return 0;
}
//*/
