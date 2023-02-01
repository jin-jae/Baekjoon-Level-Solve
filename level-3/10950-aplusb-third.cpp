#include <iostream>

int	main(void) {
	int	cases;
	std::cin >> cases;
	for (int i = 0; i < cases; i++) {
		int	a, b;
		std::cin >> a >> b;
		std::cout << a + b << std::endl;
	}
	return	0;
}
