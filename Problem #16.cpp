/*#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void printMatrix(int arr[3][3], short rows, short cols)
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
short CountNumber(int matrix1[3][3], int num, short rows, short cols)
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
bool isSparce(int matrix[3][3], short rows, short cols)
{
	short matrixSize = rows * cols;
	return (CountNumber(matrix1, 0, 3, 3) >= ceil((float) matrixSize / 2);
}
int main()
{
	int matrix[3][3] = { {5, 6, 8}, {99, 88, 77}, {10, 20 , 30} };
	cout << "\nMatrix:\n";
	printMatrix(matrix, 3, 3);

	if (isSparce(matrix, 3, 3))
		cout << "\nyes sparce";
	else
		cout << "\nno sparce";
}*/