#include <iostream>
#include <cmath>

int chkprime(int num) {
    for (int i = 2; i < int(sqrt(num)) + 1; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int chebyshev(int num) {
    int res = 0;
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
    for (int i = num + 1; i <= extended; i++)
        if (chk[i])
            res++;
    return res;
}

int main(void) {
    int num;
    std::cin >> num;
    while (num) {
        int ans = chebyshev(num);
        std::cout << ans << "\n";
        std::cin >> num;
    }
    return 0;
}
