#include <iostream>
#include <cmath>

// 2 1 5
// 2 1 3 2 4 3 5

int	main (void) {
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int	up, down, meter;
	std::cin >> up >> down >> meter;
	double	answer = (double) (meter - down) / (up - down);

	std::cout << (int) ceil(answer);
	return	0;
}
