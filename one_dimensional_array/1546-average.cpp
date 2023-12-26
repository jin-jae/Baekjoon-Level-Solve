#include <iostream>

int	main(void) {
	int	n;
	std::cin >> n;
	double	*arr = new double[n];
	for (int i = 0; i < n; i++)
		std::cin >> arr[i];
	int	max = arr[0];
	for (int i = 0; i < n; i++)
		if (max < arr[i])
			max = arr[i];
	for (int i = 0; i < n; i++)
		arr[i] = arr[i]	/ max * 100;
	double	sum = 0.0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	sum /= n;
	std::cout << sum;
}
