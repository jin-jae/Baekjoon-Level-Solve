#include <iostream>

int	power(int num, int pow) {
	int	answer = 1;
	for (int i = 0; i < pow; i++)
		answer *= num;
	return	answer;
}

int	main(void) {
	std::string	a, b;
	std::cin >> a >> b;
	int	ansa, ansb;
	for (int i = 2; i >= 0; i--) {
		ansa += a * power(10, i)
