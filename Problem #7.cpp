/*#include <iostream>
#include <string>
using namespace std;

void FillMatrixWithOrderedNumber(int arr[3][3], int rows, int cols)
{
	int counter = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			counter++;
			arr[i][j] = counter;
		}
	}
}
void PrintMatrix(int arr[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "  ";
		}
		cout << "\n";
	}
}
void TransposeMatrix(int arr[3][3], int arrTranspose[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			arrTranspose[j][i] = arr[i][j];
		}
	}
}
int main(){
	int arr[3][3];
	int arrTranspose[3][3];
	FillMatrixWithOrderedNumber(arr, 3, 3);
	cout << "\n The following is a 3x3 matrix filled with ordered numbers:\n";
	PrintMatrix(arr, 3, 3);
	cout << "\n The following print transposed matrix\n";
	TransposeMatrix(arr, arrTranspose, 3, 3);
	PrintMatrix(arrTranspose, 3, 3);
}*/