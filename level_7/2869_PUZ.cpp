#include <iostream>

int	main (void) {
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int	up, down, meter;
	std::cin >> up >> down >> meter;
	std::cout << meter / (up - down);
	return	0;
}
