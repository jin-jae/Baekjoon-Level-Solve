#include <iostream>
#include <string>

bool	chkgroupword(std::string s) {
	if (s.size() == 1)
		return	true;
	int	arr[26] = { 0 };
	char	state = s[0];
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != state && arr[s[i] - 'a'] != 0)
			return	false;
		else {
		arr[s[i] - 'a']++;
		state = s[i];
		}
	}
	return	true;
}

int	main(void) {
	int	cases;
	std::cin >> cases;
	int	answer = 0;
	for (int i = 0; i < cases; i++) {
		std::string	s;
		std::cin >> s;
		if (chkgroupword(s))
			answer++;
	}
	std::cout << answer;
	return	0;
}
