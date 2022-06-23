#include <iostream>

int	main(void) {
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int	num;
	int	cnt = 0;
	int	fir, sec;
	std::cin >> num;
	int	chknum = num;
	do {
		fir = chknum / 10;
		sec = chknum % 10;
		//std::cout << "fir : " << fir << " sec : " << sec << std::endl;
		chknum = sec * 10 + ((fir + sec) % 10);
		//std::cout << "chknum : " << chknum << std::endl;
		cnt++;
	} while (num != chknum);
	std::cout << cnt;
	return	0;
}
