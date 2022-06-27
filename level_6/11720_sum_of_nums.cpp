#include <iostream>
#include <string>

int	main(void) {
	int	num;
	std::string	s;
	int	sum = 0;

	std::cin >> num >> s;
	for (int i = 0; i < num; i++) {
		sum += (int) (s[i] - '0');
	}
	std::cout << sum;
	return	0;
}
