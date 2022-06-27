#include <iostream>
#define	NUM	10000
int	main(void) {
	int	*arr = new int[NUM + 1]();
	int	chk;
	for (int i = 0; i <= NUM; i++) {
		//std::cout << i << " cal start : " << "\n";
		int	tmp = i;
		chk = i;
		int	answer = 0;
		while (tmp != 0) {
			answer += tmp % 10;
			tmp /= 10;
		}
		//std::cout << "answer : " << answer << " " << "chk : " << chk << "\n";
		arr[answer + chk]++;
		//std::cout << "this plused : " << answer + tmp << "\n";
	}
	for (int i = 1; i <= NUM; i++) {
		if (arr[i] == 0)
			std::cout << i << "\n";
	}
	return	0;
}

