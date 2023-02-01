#include <iostream>

int	main(void) {
	int	t;
	std::cin >> t;
	while (t != 0) {
		int	k, n;
		std::cin >> k >> n;
		int	**arr = new int*[k + 1];
		for (int i = 0; i < k + 1; i++)
			arr[i] = new int[n + 1];
		for (int i = 0; i < n + 1; i++)
			arr[0][i] = i;
		for (int i = 1; i < k + 1; i++) {
			arr[i][0] = 0;
			for (int j = 0; j < n + 1; j++) {
				int	num = 0;
				for (int m = 0; m <= j; m++) {
					num += arr[i - 1][m];
				}
				arr[i][j] = num;
			}
		}
		std::cout << arr[k][n] << "\n";
		t--;
	}
	return	(0);
}
