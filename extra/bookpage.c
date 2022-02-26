#include <stdio.h>

int	main(void)
{
	int	page;
	int	check;
	int	start = 1;
	int	g_start = 1;
	int	result[10] = { 0, };

	scanf("%d", &page);
	while (g_start != page + 1)
	{
		start = g_start;
		while (start != 0)
		{
			check = start % 10;
			result[check]++;
			start /= 10;
		}
		g_start++;
	}

	printf("%d %d %d ", result[0], result[1], result[2]);
	printf("%d %d %d ", result[3], result[4], result[5]);
	printf("%d %d %d %d", result[6], result[7], result[8], result[9]);
}
