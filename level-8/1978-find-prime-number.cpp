#include <iostream>
#include <cmath>

bool	chkprime(int num) {
	int	sqr = sqrt(num);
	if (num == 1)	return false;
	if (num == 2)	return true;
	for (int i = 2; i <= sqr; i++) {
		if (num % i == 0)
			return	false;
	}
	return true;
}

int	main(void) {
	int	answer;
	int	cases;

	answer = 0;
	std::cin >> cases;
	for (int i = 0; i < cases; i++) {
		int	num;
		std::cin >> num;
		if (chkprime(num))
			answer++;
	}
	std::cout << answer;
	return (0);
}
