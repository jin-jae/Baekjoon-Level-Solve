#include <iostream>

int	main(void) {
	int	num1, num2;
	std::cin >> num1 >> num2;

	if (num1 > 0) {
		if (num2 > 0)
			std::cout << '1';
		else if (num2 < 0)
			std::cout << '4';
	} else {
		if (num2 > 0)
			std::cout << '2';
		else
			std::cout << '3';
	}
}
