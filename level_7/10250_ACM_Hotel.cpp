#include <iostream>

int	main(void) {
	int	cases;
	std::cin >> cases;
	while (cases != 0) {
		int	height, width, nth;
		std::cin >> height >> width >> nth;
		int	param0 = nth % height == 0 ? height : nth % height;
		int	param1 = nth % height == 0 ? nth / height : nth / height + 1;
		std::cout << param0;
		param1 < 10 ? std::cout << "0" << param1 : std::cout << param1;
		std::cout << "\n";
		cases--;
	}
	return	0;
}
