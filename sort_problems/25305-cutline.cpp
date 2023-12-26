#include <iostream>

void    swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {
    int cnt;
    std::cin >> cnt;

    int* arr = new int[cnt];

    int cutline;
    std::cin >> cutline;

    for (int i = 0; i < cnt; i++) {
        int tmp;
        std::cin >> tmp;
        arr[i] = tmp;
    }

    for (int i = 0; i < cnt; i++)
        for (int j = i + 1; j < cnt; j++)
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);

    std::cout << arr[cnt - cutline] << "\n";
    return 0;
}
