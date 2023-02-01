#include <iostream>
#include <string>

int	main(void) {
	std::string	s;
	std::cin >> s;
	int	answer = 0;
	for (int i = 0; i < s.size(); ) {
		if (s[i] == 'd' && i < s.size() - 2 && s[i + 1] != '-') {
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
		} else if ((s[i] == 'c' ||s[i] == 'd' || s[i] == 'l' || s[i] == 'n' || s[i] == 's' || s[i] == 'z') && i < s.size() - 1) {
			if (s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-') || s[i] == 'd' && s[i + 1] == '-'
					|| (s[i] == 'l' || s[i] == 'n') && s[i + 1] == 'j' || (s[i] == 's' || s[i] == 'z') && s[i + 1] == '=') {
				answer++;
				i += 2;
			} else {
				answer++;
				i++;
			}
		} else {
			answer++;
			i++;
		}
	}
	std::cout << answer;
}
