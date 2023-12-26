#include <iostream>
#define	TIMES	9

int	main(void) {
	int	num;
	std::cin >> num;
	for (int i = 1; i <= TIMES; i++) {
		std::cout << num << " * " << i << " = " << num * i << std::endl;
	}
	return	0;
}
