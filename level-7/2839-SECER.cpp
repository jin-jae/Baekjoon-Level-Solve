#include <iostream>

int	main(void) {
	int	packages;
	std::cin >> packages;

	if (packages == 4 || packages == 7) {
		std::cout << "-1";
		return (0);
	}
	else if (packages == 3) {
		std::cout << "1";
		return (0);
	}
	int	chk = packages % 5;
	switch (chk) {
		case 0:
			std::cout << packages / 5;
			break ;
		case 1:
			std::cout << packages / 5 + 1;
			break ;
		case 2:
			std::cout << packages / 5 + 2;
			break ;
		case 3:
			std::cout << packages / 5 + 1;
			break ;
		case 4:
			std::cout << packages / 5 + 2;
			break ;
	}
	return (0);
}
