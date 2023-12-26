#include <iostream>

int	main(void) {
	int	total, ea;
	std::cin >> total >> ea;
	int	chk = 0;
	for (int i = 0; i < ea; i++) {
		int price, prea;
		std::cin >> price >> prea;
		chk += (price * prea);
	}
	if (total == chk)
		std::cout << "Yes";
	else
		std::cout << "No";
	return (0);
}
