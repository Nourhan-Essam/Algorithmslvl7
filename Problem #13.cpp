/*#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void PrintMatrix(int arr[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			printf("%0*d ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}
bool IsIdentityMatrix(int matrix1[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (i == j && matrix1[i][j] != 1)
			{
				return false;
			}
			else if (i != j && matrix1[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int matrix1[3][3] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 2} };
	cout << "\nMatrix1:\n";
	PrintMatrix(matrix1, 3, 3);
	if (IsIdentityMatrix(matrix1, 3, 3))
		cout << "\nYes, the matrix is identity";
	else
		cout << "\nNo, the matrix isn't identity";
}*/