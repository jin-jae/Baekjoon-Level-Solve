#include <iostream>

int	main(void) {
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int	num;
	std::cin >> num;
	for (int i = 1; i <= num; i++) {
		std::cout << i << "\n";
	}
	return	0;
}
