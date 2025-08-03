/*#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string s1;
	cout << "Please enter a string: \n";
	getline(cin, s1);
	return s1;
}
char InvertChar(char c1)
{
	return isupper(c1) ? tolower(c1) : toupper(c1);
}
string InvertAllStringLetters(string s1)
{
	for (short i = 0; i < s1.length(); i++)
	{
		s1[i] = InvertChar(s1[i]);
	}
	return s1;
}
int main()
{
	string s1 = ReadString();
	cout << "\nInverted string is : " << InvertAllStringLetters(s1) << endl;
	return 0;
}*/