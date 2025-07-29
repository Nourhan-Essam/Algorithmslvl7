/*#include<iostream>
#include <string>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To) {
	int randnum = rand() % (To - From + 1) + From;
	return randnum;
}
void FillMatrixWithValues(int arr[3][3], short rows, short cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int arr[3][3], short rows, short cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%0*d ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}
bool AreTypical(int matrix1[3][3], int matrix2[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (matrix1[i][j] != matrix2[i][j])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	srand((unsigned)time(NULL));
	int matrix1[3][3], matrix2[3][3];
	FillMatrixWithValues(matrix1, 3, 3);
	cout << "\nMatrix1:\n" << endl;
	PrintMatrix(matrix1, 3, 3);

	FillMatrixWithValues(matrix2, 3, 3);
	cout << "\nMatrix2:\n" << endl;
	PrintMatrix(matrix2, 3, 3);

	if (AreTypical(matrix1, matrix2, 3, 3))
		cout << "Yes, both matrices are typical";
	else
		cout << "No, both matrices aren't typical";
}*/