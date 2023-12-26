#include <stdio.h>

int	main(void) {
	int	fixed, variable, price;
	scanf("%d %d %d", &fixed, &variable, &price);

	int	chk = price - variable;
	if (chk <= 0) {
		printf("%d", -1);
		return	0;
	}
	double	answer = (double) fixed / (double) chk + 1;
	if (answer == 0)
		answer = 1;
	printf("%d", (int) answer);
	return	0;
}
