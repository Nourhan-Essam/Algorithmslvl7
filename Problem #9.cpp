/*#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
	int randnum = rand() % (To - From + 1) + From;
	return randnum;
}
void FillMatricesWithOrderedNumber(int arr[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}
void PrintMatrices(int arr[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}
void PrintMiddleRow(int arr[3][3], short rows, short cols)
{
	short middleRow = rows / 2;
	for (short j = 0; j < cols; j++) {
		cout << setw(3) << arr[middleRow][j] << " ";
	}
}
void PrintMiddleColumn(int arr[3][3], short rows, short cols)
{
	short middleColumn = cols / 2;
	for (short i = 0; i < rows; i++) {
		cout << setw(3) << arr[i][middleColumn] << " ";
	}
	cout << "\n";
}
int main(){
	srand((unsigned)time(NULL));
	int matrix[3][3];
	FillMatricesWithOrderedNumber(matrix, 3, 3);
	cout << "\n The following is a 3x3 matrix: \n";
	PrintMatrices(matrix, 3, 3);
	cout << "\n The middle row of the matrix is: \n";
	PrintMiddleRow(matrix, 3, 3);
	cout << "\n The middle column of the matrix is: \n";
	PrintMiddleColumn(matrix, 3, 3);
	system("pause > 0");
}*/