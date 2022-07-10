#include <iostream>
#include <string>

int	main(void) {
	std::string	s;
	std::cin >> s;
	int	answer = 0;
	for (int i = 0; i < s.size(); ) {
		if (s[i] == 'd' && i < s.size() - 2) {
			if (s[i + 1] == 'z') {
				if (s[i + 2] == '=') {
					answer++;
					i += 3;
				} else {
					answer += 2;
					i += 2;
				}
			} else {
				answer++;
				i++;
			}
		} else if ((s[i] == 'c' || s[i] == 'l' || s[i] == 'n' || s[i] == 's' || s[i] == 'z') && i != s.size() - 1) {
			if (s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-')) {
				answer++;
				i += 2;
			} else if (s[i] == 'd' && 
