#include <iostream>

int	main(void) {
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int	cases;
	std::cin >> cases;
	int	a, b;
	for (int i = 0; i < cases; i++) {
		std::cin >> a >> b;
		std::cout << a + b << "\n";
	}
}
