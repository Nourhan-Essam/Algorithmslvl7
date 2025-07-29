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
		for (short j = 0; j, cols; j++) {
			cout << setw(3) <<arr[i][j] << " ";
		}
		cout << "\n";
	}
}
void MultipleMatrices(int matrix1[3][3], int matrix2[3][3], int matrixResult[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			matrixResult[i][j] = matrix1[i][j] * matrix2[i][j];
		}
	}
}
int main(){
	srand((unsigned)time(NULL));
	int matrix1[3][3], matrix2[3][3], matrixResult[3][3];
	FillMatricesWithOrderedNumber(matrix1, 3, 3);
	cout << "\n The following is 3x3 matrix 1:";
	PrintMatrices(matrix1, 3, 3);

	FillMatricesWithOrderedNumber(matrix2, 3, 3);
	cout << "\n The following is 3x3 matrix 2:";
	PrintMatrices(matrix2, 3, 3);

	MultipleMatrices(matrix1, matrix2, matrixResult, 3, 3);
	cout << "\n Results : \n";
	PrintMatrices(matrixResult, 3, 3);
	system("pause > 0");
}*/