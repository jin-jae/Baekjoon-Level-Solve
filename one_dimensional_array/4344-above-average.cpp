#include <iostream>
#include <cmath>

int	main(void) {
	int	c;
	std::cin >> c;
	for (int i = 0; i < c; i++) {
		int	n;
		std::cin >> n;
		int	*arr = new int[n];
		double	average = 0.0;
		for (int j = 0; j < n; j++) {
			std::cin >> arr[j];
			average += arr[j];
		}
		average /= n;
		int	chk = 0;
		for (int j = 0; j < n; j++)
			if (arr[j] > average)
				chk++;
		double	answer = ((double) chk / (double) n) * 100;
		std::cout << std::fixed;
		std::cout.precision(3);
		std::cout << answer << '%' << "\n";
	}
	return	0;
}
