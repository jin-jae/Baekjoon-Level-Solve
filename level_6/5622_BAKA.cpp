#include <iostream>
#include <string>

int	main (void) {
	std::string	s;
	std::cin >> s;
	int	arr[] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	int	sum = 0;

	for (int i = 0; i < s.size(); i++)
		sum += arr[s[i] - 'A'];

	std::cout << sum;
	return	0;
}
