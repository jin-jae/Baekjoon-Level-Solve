#include <iostream>

int	power(int num, int pow) {
	int	answer = 1;
	for (int i = 0; i < pow; i++)
		answer *= num;
	return	answer;
}

int	main(void) {
	int	a, b;
	std::cin >> a >> b;
	int	ansa = 0;
	int	ansb = 0;
	for (int i = 2; i >= 0; i--) {
		ansa += (a % 10) * power(10, i);
		a /= 10;
		ansb += (b % 10) * power(10, i);
		b /= 10;
	}
	if (ansa > ansb)
		std::cout << ansa;
	else
		std::cout << ansb;
	return	0;
}
