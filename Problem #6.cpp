/*#include <iostream>
#include <string>
using namespace std;

void FillMatrixWithOrderedNum(int arr[3][3], short rows, short cols)
{
	int counter = 0;
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			counter++;
			arr[i][j] = counter;
		}
	}
}
void PrintMatrix(int arr[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			cout << arr[i][j] << "  ";
		}
		cout << "\n";
	}
}
int main(){
	int arr[3][3];
	FillMatrixWithOrderedNum(arr, 3, 3);
	cout << "\n The following is a 3x3 matrix filled with ordered numbers:\n";
	PrintMatrix(arr, 3, 3);
	system("pause > 0");
}*/