#include <stdio.h>

int	main(void)
{
	double	num1;
	double	num2;

	scanf("%lf %lf", &num1, &num2);
	printf("%.10lf", num1/num2);
}
