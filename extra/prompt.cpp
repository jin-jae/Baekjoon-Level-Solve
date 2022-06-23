#include <iostream>
using namespace	std;

int	main(void)
{
	int	n;
	cin >> n;

	int **arr = new int*[n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[51];

	for (int j = 0; j < n; j++)
		cin << arr[j];

	cout >> arr[0];

	for (int i = 0; i < n; i++)
		delete [] arr[i];
	delete[] arr;
}

