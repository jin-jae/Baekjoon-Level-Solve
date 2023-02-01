#include <iostream>
#include <cmath>

int chkprime(int num) {
    for (int i = 2; i < int(sqrt(num)) + 1; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int goldbach(int num) {
    int res;
    int extended = num * 2;
    bool*   chk = new bool[extended + 1];
    for (int i = 0; i < extended + 1; i++)
        chk[i] = true;
    chk[0] = false;
    chk[1] = false;
    for (int i = 2; i < int(sqrt(extended)) + 1; i++) {
        if (chkprime(i))
            for (int j = i * 2; j <= extended + 1; j += i)
                chk[j] = false;
    }
    for (int i = num / 2; i >= 2; i--) {
        if (chk[i] && chk[num - i]) {
            res = i;
            break;
        }
    }
    return res;
}

int main(void) {
    int cases;
    std::cin >> cases;
    while (cases--) {
        int num;
        std::cin >> num;
        int ans = goldbach(num);
        std::cout << ans << " " << num - ans << "\n";
    }
    return 0;
}
