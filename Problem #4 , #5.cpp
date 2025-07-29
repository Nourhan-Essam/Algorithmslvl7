/*#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int RandomNum(int From, int To) {
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}
void FillMatrix(int arr[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			arr[i][j] = RandomNum(1, 100);
		}
	}
}
void PrintMatrix(int arr[3][3], short rows, short cols) 
{
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}
int ColSum(int arr[3][3], short row, short colNum)
{
	int sum = 0;
	for (short i = 0; i <= row - 1; i++) {
		sum += arr[i][colNum];
	}
	return sum;
}
void SumMatrixInArr(int arr[3][3], int arrSum[3], short row, short col) {
	for (short i = 0; i < col; i++) {
		arrSum[i] = ColSum(arr, row, i);
	}
}
void PrintColSumArray(int arr[3], short col)
{
	cout << "\n The following are the sum of each column in matrix:\n";
	for (short i = 0; i < col; i++) {
		cout << " Column " << i + 1 << " Sum = " << arr[i] << "\n";
	}
}
void PrintEachColSum(int arr[3][3], short row, short col)
{
	cout << "\n The following is the sum of columns in the matrix:\n";
	for (short j = 0; j < col; j++) {
		cout << "Column " << j + 1 << " Sum = " << ColSum(arr, row, j) << "\n";
	}
}
int main(){
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arrSum[3];
	FillMatrix(arr, 3, 3);
	cout << "\n The following is a 3x3 matrix filled with random numbers:\n";
	PrintMatrix(arr, 3, 3);
	SumMatrixInArr(arr, arrSum, 3, 3);

	PrintEachColSum(arr, 3, 3);
	system("pause > 0");
}*/