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
char Readchar()
{
	char c1;
	cout << "Please enter a character: \n";
	cin >> c1;
	return c1;
}
char InvertLetterChar(char c1)
{
	return isupper(c1) ? tolower(c1) : toupper(c1);
}
short CountLetters(string s1, char letter, bool MatchCase = true)
{
	short counter = 0;
	for (short i = 0; i < s1.length(); i++)
	{
		if (MatchCase) 
		{
			if (s1[i] == letter)
				counter++;
		}
		else
		{
			if (tolower(s1[i]) == tolower(letter))
				counter++;
		}
	}
	return counter++;
}
int main()
{
	string s1 = ReadString();
	char c1 = Readchar();
	cout << "\nLetter \' " << c1 << "\' Count = " << CountLetters(s1, c1);
	cout << "\nLetter \'" << c1 << "\'";
	cout << "or \'" << InvertLetterChar(c1) << "\ '";
	cout << "Count = " << CountLetters(s1, c1, false);
}*/