/*#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void printMatrix(int arr[3][3],  short rows, short cols)
{
	for (short r = 0; r < rows; r++)
	{
		for (short c = 0; c < cols; c++)
		{
			printf("%0*d ", 2, arr[r][c]);
		}
		cout << "\n";
	}
}
short CountNumber(int matrix1[3][3], int num ,short rows, short cols)
{
	int numCounter = 0;
	for (short r = 0; r < rows; r++)
	{
		for (short c = 0; c < cols; c++)
		{
			if (matrix[r][c] == num)
			{
				numCounter++
			}
		}
	}
	return numCounter;
}
int main()
{
	int matrix1[3][3] = { {4, 6, 99}, {55, 72, 31}, {61, 85, 11} };
	cout << "\nMatrix:\n";
	printMatrix(arr, 3, 3);

	int num;
	cout << "Please enter the number?\n";
	cin >> num;
	cout << "\nNumber " << num << "count in matrix is:" << CountNumber(matrix1, num, 3, 3);
}*/