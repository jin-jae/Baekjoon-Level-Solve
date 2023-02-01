#include <iostream>

// 1 2 3 4 5 ...
// 1/1 1/2 2/1 3/1 2/2 1/3... 

int	main(void) {
	int	num;
	std::cin >> num;
	int	chk = 0;
	int	plus = 1;
	while (chk < num) {
		chk += plus;
		plus++;
	}
	//std::cout << "chk : " << chk << " plus : " << plus << std::endl;
	int	tominus = chk - num;
	//std::cout << " tominus : " << tominus << std::endl;
	if (plus % 2 != 0)
		std::cout << plus - (tominus + 1) << '/' << tominus + 1;
	else
		std::cout << tominus + 1 << '/' << plus - (tominus + 1);
	return	0;
}
