#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char* argv[])
{
	if (argc == 0)
		return (0);
	int	page;
	int	check;
	int	start = 1;
	int	result[10] = { 0, };

	page = atoi(argv[1]);

	while (start != page + 1)
	{
	}

	for (int i = 0; i < 9; i++)
		printf("%d ", result[i]);
	printf("%d", result[9]);
}
