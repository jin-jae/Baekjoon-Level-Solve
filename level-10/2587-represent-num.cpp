#include <iostream>

void    swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {
    int arr[5];
    int average = 0;
    for (int i = 0; i < 5; i++) {
        int tmp;
        std::cin >> tmp;
        average += tmp;
        arr[i] = tmp;
    }
    average /= 5;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
    std::cout << average << "\n";
    std::cout << arr[2] << "\n";
}
