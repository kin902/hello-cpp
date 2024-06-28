#include <iostream>

/*
 * Sort An Araay:https://www.youtube.com/watch?v=-TkoO8Z07hI&t=12043s
 */

/*
void sortArray(int array[], int size);

int main() {
    std::cout << "==================== Sort An Array ====================" << '\n';
    int numList[] = {4, 7, 6, 8, 10, 9, 2, 1, 5, 3};
    int size = 0;
    for(const int &num: numList) {
        size++;
    }
    sortArray(numList, size);
    for(int element: numList) {
        std::cout << element << " ";
    }
    return 0;
}

void sortArray(int array[], int size) {
    int temp = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
//*/
