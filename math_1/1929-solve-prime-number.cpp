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
	int	m, n;
	std::cin >> m >> n;
	while (m <= n) {
		if (chkprime(m))
			std::cout << m << "\n";
		m++;
	}
	return (0);
}
