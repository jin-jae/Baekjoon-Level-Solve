#include <iostream>

// 1 6 12 18 ...
// 1 7 19 37

int	honeycomb(int num) {
	int	cur = 1;
	int	chk = 0;
	int	ans = 1;
	while (num > cur) {
		chk += 6;
		cur += chk;
		ans++;
	}
	return	ans;
}

int	main(void) {
	int	num;
	std::cin >> num;
	std::cout << honeycomb(num);
	return	0;
}
