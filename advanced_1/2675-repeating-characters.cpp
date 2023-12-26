#include <iostream>
#include <string>

int	main(void) {
	int	p;
	std::cin >> p;
	for (int i = 0; i < p; i++) {
		int	n;
		std::string	s;
		std::string	answer = "";
		std::cin >> n >> s;
		for (int j = 0; j < s.size(); j++)
			for (int k = 0; k < n; k++)
				answer += s[j];
		std::cout << answer << "\n";
	}
	return	0;
}
