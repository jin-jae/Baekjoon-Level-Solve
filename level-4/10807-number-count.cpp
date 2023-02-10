#include <iostream>

int	main(void) {
    int cnt;
    int ans = 0;
    int findnum;

    std::cin >> cnt;
    int *array = new int[cnt];
    for (int i = 0; i < cnt; i++) {
        std::cin >> array[i];
    }
    std::cin >> findnum;

    for (int i = 0; i < cnt; i++) {
        if (array[i] == findnum)
            ans++;
    }
    std::cout << ans << "\n";
    return 0;
}
