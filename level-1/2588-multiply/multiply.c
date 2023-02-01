#include <stdio.h>

int	main(void)
{
	int	num1;
	int	num2;
	int	num3;
	int	num4;
	int	num5;
	int	num6;

	scanf("%d\n%d", &num1, &num2);
	num3 = num1 * (num2 % 10);
	num2 /= 10;
	num4 = num1 * (num2 % 10);
	num2 /= 10;
	num5 = num1 * (num2 % 10);
	num6 = num3 + (num4 * 10) + (num5 * 100);
	printf("%d\n%d\n%d\n%d", num3, num4, num5, num6);
}
