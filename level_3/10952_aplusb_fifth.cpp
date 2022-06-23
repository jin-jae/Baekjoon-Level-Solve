#include <iostream>

int	main(void) {
	int	a = -1;
	int	b = -1;

	while (a != 0 || b != 0) {
		std::cin >> a >> b;
		if (a != 0 || b != 0)
			std::cout << a + b << "\n";
	}
	return	0;
}
