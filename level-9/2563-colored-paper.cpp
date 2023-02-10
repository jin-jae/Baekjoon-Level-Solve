#include <iostream>

int main(void) {
    int cnt;
    std::cin >> cnt;

    int **arr = new int*[100];
    for (int i = 0; i < 100; i++)
        arr[i] = new int[100];

    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            arr[i][j] = 0;

    while (cnt--) {
        int x, y;
        std::cin >> x >> y;
        for (int i = x; i < x + 10; i++) {
            for (int j = y; j < y + 10; j++) {
                arr[i][j] += 1;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (arr[i][j] >= 1)
                ans++;
        }
    }
    std::cout << ans << "\n";
    return 0;
}
