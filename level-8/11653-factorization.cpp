#include <iostream>

int	main(void) {
	int	num;
	int	gnum;
	bool	flag;

	std::cin >> num;
	if (num == 1)
		return (0);
	gnum = num;
	flag = false;
	for (int i = 2; i * 2 <= gnum + 1; i++) {
		// std::cout << i << " is now going to check..." << "\n";
		// if (chkprime(i)) {
			// std::cout << i << " is now checked as prime" << "\n";
			while (num % i == 0) {
				flag = true;
				num /= i;
				std::cout << i << "\n";
			}
		// }
	}
	if (!flag)
		std::cout << gnum << "\n";
	return (0);
}
