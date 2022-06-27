#include <iostream>
#include <string>

int	main(void) {
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int	t;
	std::cin >> t;
	std::string	result;
	for (int i = 0; i < t; i++) {
		std::cin >> result;
		char	*resarr = new char[result.size()];
		for (int j = 0; j < result.size(); j++) {
			resarr[j] = result.at(j);
		}
		int	cnt = 0;
		int	answer = 0;
		for (int j = 0; j < result.size(); j++) {
			if (resarr[j] == 'O') {
				cnt++;
				answer += cnt;
			}
			else if (resarr[j] == 'X')
				cnt = 0;
		}
		std::cout << answer << "\n";
	}
	return	0;
}
