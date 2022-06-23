#include <iostream>

using namespace std;

int	arr_check(int **arr)
{
	for (int j = 0; j < row - 1; j++)
	{
		for (int k = 0; k < row - 1; k++)
		{
			for (int m = 1; m < row - k; m++)
			{
				if (arr[j][k] == arr[j][k + m])
				{
					if (arr


int	main(void)
{
	int	row;
	int	col;

	cin >> row, col;

	int	**arr = new int*[row];
	for (int i = 0; i < row; i++)
		arr[i] = new int[col];

	for (int j = 0; j < row; j++)
	{
		for (int k = 0; k < row; k++)
			cin >> arr[j][k];
	}
	
