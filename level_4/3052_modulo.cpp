#include <iostream>
#define	INPUT	10
#define	MOD	42

int	main(void) {
	int	num;
	int	answer = 0;
	int	arr[MOD];
	for (int i = 0; i < MOD; i++)
		arr[i] = 0;
	for (int i = 0; i < INPUT; i++) {
		std::cin >> num;
		arr[num % 42]++;
	}
	for (int i = 0; i < MOD; i++)
		if (arr[i] != 0)
			answer++;
	std::cout << answer;
	return	0;
}
