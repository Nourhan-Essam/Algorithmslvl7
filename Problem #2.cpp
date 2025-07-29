/*#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int RandomNum(int From, int To) 
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}
void FillMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++) {
		for (short j = 0;  j < Cols; j++) {
			arr[i][j] = RandomNum(1, 100);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			cout << setw(3) << arr[i][j] << " ";
	}
		cout << "\n";
	}
}
int RowSum(int arr[3][3], short RowNum, short Cols)
{
	int sum = 0;
	for (short j = 0; j < Cols; j++) {
		sum += arr[RowNum][j];
	}
	return sum;
}
void PrintEachRowSum(int arr[3][3], short Rows, short Cols)
{
	cout << "\n The following is the sum of rows in the matrix:\n";
	for (short i = 0; i < Rows; i++) {
		cout << "Row" << i + 1 << ":" << "Sum = " << RowSum(arr, i, Cols) << "\n";
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	FillMatrix(arr, 3, 3);	
	cout << "\n The following is a 3x3 matrix filled with random numbers:\n";
	PrintMatrix(arr, 3, 3);
	PrintEachRowSum(arr, 3, 3);
	system("pause > 0");
}*/