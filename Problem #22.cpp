/*#include <iostream>
using namespace std;

void PrintFebonacciUsingRecursion(short num, int prev1, int prev2)
{
	int febNumber = 0;
	if (num > 0)
	{
		febNumber = prev2 + prev1;
		prev2 = prev1;
		prev1 = febNumber;
		cout << febNumber << "   ";
		PrintFebonacciUsingRecursion(num - 1, prev1, prev2);

	}
}
int main()
{
	PrintFebonacciUsingRecursion(10, 0, 1);
}*/