#include <iostream>

void    swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void    bubble(int cnt, int *arr) {
    for (int i = 0; i < cnt; i++) {
        for (int j = i + 1; j < cnt; j++) {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
}

int main(void) {
    int cnt;
    std::cin >> cnt;
    int *arr = new int[cnt];
    for (int i = 0; i < cnt; i++) {
        int tmp;
        std::cin >> tmp;
        arr[i] = tmp;
    }

    bubble(cnt, arr);
    for (int i = 0; i < cnt; i++) {
        std::cout << arr[i] << "\n";
    }
    return 0;
}
