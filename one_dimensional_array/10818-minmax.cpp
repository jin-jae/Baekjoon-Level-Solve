#include <iostream>

int	main(void) {
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int	n;
	std::cin >> n;
	int	*arr = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> arr[i];
	int	min = arr[0];
	int	max = arr[0];
	for (int i = 0; i < n; i++) {
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	std::cout << min << ' ' << max;
	return	0;
}
