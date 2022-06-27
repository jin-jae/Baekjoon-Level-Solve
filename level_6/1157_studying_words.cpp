#include <iostream>
#include <string>

int	main(void) {
	std::string	s;
	std::cin >> s;
	int	*arr = new int[26]();
	for (int i = 0; i < s.size(); i++)
		arr[(s[i] >= 'A' && s[i] <= 'Z') ? s[i] - 'A' : s[i] - 'a']++;
	int	max = 0;
	for (int i = 0; i < 26; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	int	chk = 0;
	for (int i = 0; i < 26; i++) {
		if (arr[i] == max)
			chk++;
	}
	if (chk > 1)
		std::cout << '?';
	else {
		for (int i = 0; i < 26; i++) {
			if (arr[i] == max)
				std::cout << (char) ('A' + i);
		}
	}
	return	0;
}
