#include <iostream>

int	main(void) {
	int	num1;
	std::cin >> num1;
	if (num1 >= 90)
		std::cout << 'A';
	else if (num1 >= 80)
		std::cout << 'B';
	else if (num1 >= 70)
		std::cout << 'C';
	else if (num1 >= 60)
		std::cout << 'D';
	else
		std::cout << 'F';
}
