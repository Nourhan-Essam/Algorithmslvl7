/*#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To) 
{
	int randnum = rand() % (To - From + 1) + From;
	return randnum;
}

void FillMatrixWithValues(int arr[3][3], short rows, short cols)
{
	for (int i = 0; i < rows; i++) 
	{
		for (int j = 0; j < cols; j++)
		{
			 arr[i][j] == RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], short rows, short cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%0*d ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}

int SumOfMatrices(int matrix1[3][3], short rows, short cols)
{
	int sum = 0;
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			sum += matrix1[i][j];
		}
	}
	return sum;
}

bool AreEqualMatrices(int matrix1[3][3], int matrix2[3][3], short rows, short cols)
{
	return (SumOfMatrices(matrix1, rows, cols) == SumOfMatrices(matrix2, rows, cols));
}

int main()
{
	srand((unsigned)time(NULL));
	int matrix1[3][3], matrix2[3][3];
	FillMatrixWithValues(matrix1, 3, 3);
	cout << "\nMatrix1:\n";
	PrintMatrix(matrix1, 3, 3);

	FillMatrixWithValues(matrix2, 3, 3);
	cout << "\nMatrix2:\n";
	PrintMatrix(matrix2, 3, 3);

	if (AreEqualMatrices(matrix1, matrix2, 3, 3))
		cout << "Yes, both matrices are Equal" << endl;
	else
		cout << "No, both matrices aren't Equal";
}*/