#include <iostream>

int main(void) {
    int arr[9][9] = {0, };

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int num;
            std::cin >> num;
            arr[i][j] = num;
        }
    }

    int max = -1;
    int maxi = -1, maxj = -1;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }
    maxi++;
    maxj++;

    std::cout << max << "\n";
    std::cout << maxi << " " << maxj;
}
