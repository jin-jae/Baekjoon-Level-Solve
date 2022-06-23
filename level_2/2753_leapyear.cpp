#include <iostream>

int	main(void) {
	int	num1;
	std::cin >> num1;

	if (num1 % 400 == 0)
		std::cout << '1';
	else if (num1 % 100 == 0)
		std::cout << '0';
	else if (num1 % 4 == 0)
		std::cout << '1';
	else
		std::cout << '0';
}
