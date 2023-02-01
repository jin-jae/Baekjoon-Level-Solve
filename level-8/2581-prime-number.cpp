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
	int	num1, num2;
	std::cin >> num1 >> num2;
	int	sum = 0;
	int	min = -1;
	bool	flag = false;
	while (num1 <= num2) {
		if (!flag && chkprime(num1)) {
			min = num1;
			sum += num1;
			flag = true;
			num1++;
			continue ;
		}
		if (flag) {
			if (chkprime(num1)) {
				sum += num1;
			}
		}
		num1++;
	}
	if (flag)
		std::cout << sum << "\n" << min;
	else
		std::cout << min;
	return (0);
}
