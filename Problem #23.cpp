#include <string>
#include <iostream>
using namespace std;

string ReadString()
{
	string s1;
	cout << "Please enter a string: \n";
	getline(cin, s1);
	return s1;
}
void PrintFirstLetterOfEachWord(string s1)
{
	bool isFirstLetter = true;
	cout << "\n First letters of this string: \n";
	for (short i = 0; i < s1.length(); i++)
	{
		if (s1[i] != ' ' && isFirstLetter)
		{
			cout << s1[i] << endl;
		}
		isFirstLetter = (s1[i] == ' ' ? true : false);
	}
}
int main()
{
	PrintFirstLetterOfEachWord(ReadString());
}