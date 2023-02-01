#include <iostream>
#define	DICE	6

int	main(void) {
	int	fir, sec, thi;
	std::cin >> fir >> sec >> thi;
	int	chk = 0;
	int arr[DICE] = {0, 0, 0, 0, 0, 0};
	arr[fir - 1]++;
	arr[sec - 1]++;
	arr[thi - 1]++;
	for(int i = 0; i < DICE; i++) {
		if (arr[i] == 3) {
			std::cout << 10000 + (i + 1) * 1000;
			chk++;
		}
		if (arr[i] == 2) {
			std::cout << 1000 + (i + 1) * 100;
			chk++;
		}
	}

	if (chk == 0) {
		for (int i = DICE - 1; i >= 0; i--) {
			if (arr[i] == 1) {
				std::cout << (i + 1) * 100;
				break ;
			}
		}
	}
	return	(0);
}	
