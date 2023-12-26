#include <iostream>
#define STUDENTS 30

int main(void) {
    bool* array = new bool[STUDENTS + 1];
    for (int i = 0; i < STUDENTS + 1; i++) {
        array[i] = false;
    }
    array[0] = true;

    for (int i = 0; i < 28; i++) {
        int num;
        std::cin >> num;
        array[num] = true;
    }
    for (int i = 0; i < STUDENTS + 1; i++) {
        if (!array[i])
            std::cout << i << "\n";
    }
}
