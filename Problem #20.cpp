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
			 cout << setw(3) << arr[i][j] << "     ";
		}
		cout << "\n";
	}
}
int IsPalindromeMatrix(int matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (matrix[i][j] != matrix[i][cols - 1 - j])
				return false;
		}
	}
	return true;
}
int main()
{
	int Matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	if (IsPalindromeMatrix(Matrix1, 3, 3))
	{ cout << "\nYes: Matrix is Palindrome\n";
	} else
		cout << "\nNo: Matrix is NOT Palindrome\n";
	system("pause>0");
}*/