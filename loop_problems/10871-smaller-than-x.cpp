#include <iostream>

int	main(void) {
	int	n, x;
	std::cin >> n >> x;
	int	chk;
	for (int i = 0; i < n; i++) {
		std::cin >> chk;
		if (chk < x)
			std::cout << chk << ' ';
	}
	return	0;
}
