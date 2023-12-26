#include <iostream>

int	arithmetic(int	num) {
	int	tmp = num;
	int	chk = 0;
	while (tmp != 0) {
		tmp /= 10;
		chk++;
	}
	if (chk == 1) {
		//std::cout << num << "\n";
		return	1;
	}
	int	*arr = new int[chk]();
	tmp = num;
	for (int i = 0; i < chk; i++) {
		arr[i] = tmp % 10;
		tmp /= 10;
	}
	int	margin = arr[0] - arr[1];

	for (int i = 1; i < chk - 1; i++) {
		if (arr[i] - arr[i + 1] != margin)
			return	0;
	}
	delete [] arr;
	//std::cout << num << "\n";;
	return	1;
}

int	main(void) {
	int	n;
	int	answer = 0;
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		answer += arithmetic(i);
	}
	std::cout << answer;
	return	0;
}
