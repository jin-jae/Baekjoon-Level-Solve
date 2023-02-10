#include <iostream>

int main(void) {
    int row, col;
    std::cin >> row >> col;

    int** arr = new int*[row];
    for (int i = 0; i < row; i++)
        arr[i] = new int[col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int num;
            std::cin >> num;
            arr[i][j] = num;
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int num;
            std::cin >> num;
            arr[i][j] += num;
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}
