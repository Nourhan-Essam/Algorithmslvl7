/*#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int RandomNumber(int From, int To) {
	int randnum = rand() % (To - From + 1) + From;
	return randnum;
}
void FillMatricesWithOrderedNumber(int arr[3][3], short rows, short cols) {
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}
void PrintMatrices(int arr[3][3], short rows, short cols) {
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}
int SumOfMatrix(int matrix[3][3], short rows, short cols)
{
	int sum = 0;
	for (short i = 0; i < rows; i++) 
	{
		for (short j = 0; j < cols; j++) {
			sum += matrix[i][j];
		}
	}
	return sum;
}
int main() {
	srand((unsigned)time(NULL));
	int matrix[3][3];
	FillMatricesWithOrderedNumber(matrix, 3, 3);
	cout << "\n The following is a 3x3 matrix: \n";
	PrintMatrices(matrix, 3, 3);
	int sum = SumOfMatrix(matrix, 3, 3);
	cout << "\n The sum of all elements in the matrix is: " << sum << "\n";
	system("pause > 0");
	return 0;
}*/