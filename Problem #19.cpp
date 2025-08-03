/*#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void PrintNum(int arr[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			printf("%0*d ", 2, arr[i][j]); // Print each number with leading zero if needed
		}
		cout << "\n";
	}
}
int minNum(int matrix[3][3], short rows, short cols)
{
	int min = matrix[0][0];
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
			}
		}
	}
	return min;
}
int maxNum(int matrix[3][3], short rows, short cols)
{
	int max = matrix[0][0];
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}
		}
	}
	return max;
}
int main()
{
	int matrix[3][3] = { {8, 5, 2}, {6, 8, 9}, {1, 0, 4} };
	cout << "\nMatrix:\n";
	PrintNum(matrix, 3, 3);
	cout << "\nMinmum Number:\n";
	minNum(matrix, 3, 3);
	cout << "\nMaxmum Number:\n";
	maxNum(matrix, 3, 3);
}*/