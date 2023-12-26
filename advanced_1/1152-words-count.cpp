#include <iostream>
#include <string>

int	main(void) {
	std::string	s;
	getline(std::cin, s);
	int	answer = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == ' ')
			answer++;
	answer++;
	if (s[0] == ' ')
		answer--;
	if (s[s.size() - 1] == ' ')
		answer--;
	std::cout << answer;
	return	0;
}
