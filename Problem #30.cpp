#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string s1;
	cout << "Please enter a string: \n";
	getline(cin, s1);
	return s1;
}
char Readchar()
{
	char c1;
	cout << "Please enter a string: \n";
	cin >> c1;
	return c1;
}
short CountLetters(string s1, char letter)
{
	short counter = 0;
	for (short i = 0; i < s1.length(); i++)
	{
		if (s1[i] == letter)
			counter++;
	}
	return counter;
}
int main()
{
	string s1 = ReadString();
	char c1 = Readchar();
	cout << "\nLetter \' " << c1 << " \ ' count = " << CountLetters(s1, c1) << endl;
}
