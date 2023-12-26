#include <iostream>

int	main(void) {
	int	num;
	std::cin >> num;
	int	answer = 0;
	for (int i = 0; i <= num; i++)
		answer += i;
	std::cout << answer;
	return	0;
}
