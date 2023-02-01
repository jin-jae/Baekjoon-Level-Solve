#include <iostream>
#define IDX	9

int	main(void) {
	int	num;
	int	arr[IDX];
	for (int i = 0; i < IDX; i++) {
		std::cin >> num;
		arr[i] = num;
	}
	int	max = arr[0];
	for (int i = 0; i < IDX; i++)
		if (max < arr[i])
			max = arr[i];
	std::cout << max << "\n";
	for (int i = 0; i < IDX; i++)
		if (arr[i] == max)
			std::cout << i + 1;
	return	0;
}
