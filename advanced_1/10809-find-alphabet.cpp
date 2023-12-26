#include <iostream>
#define	ALPHABET	26

int	main(void) {
	std::string	s;
	std::cin >> s;
	int	arr[ALPHABET];
	for (int i = 0; i < ALPHABET; i++)
		arr[i] = -1;
	for (int i = 0; i < s.size(); i++)
		if (arr[s[i] - 'a'] == -1)
			arr[s[i] - 'a'] = i;
	for (int i = 0; i < ALPHABET; i++)
		std::cout << arr[i] << ' ';
	return	0;
}
