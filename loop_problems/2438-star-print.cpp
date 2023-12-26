#include <iostream>

int	main(void) {
	int	cases;
	std::cin >> cases;

	for (int i = 0; i < cases; i++) {
		for (int j = 0; j < i + 1; j++) {
			std::cout << '*';
		}
		std::cout << "\n";
	}
	return	0;
}
