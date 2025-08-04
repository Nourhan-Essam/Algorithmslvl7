/*#include <iostream>
#include <string>
using namespace std;


string ReadString()
{
	string s1;
	cout << "Please enter a string\n";
	cin >> s1;
	return s1;
}
bool IsVowel(char c1)
{
    c1 = tolower(c1);
	return ((c1 == 'a') || (c1 == 'o') || (c1 == 'u') || (c1 == 'e') || (c1 == 'i'));
}
short CountVowelLetters(string s1)
{
	int counter = 0;
	for (short i = 0; i < s1.length(); i++)
	{
		if (IsVowel(s1[i]))
			counter++;
	}
	return counter;
}
int main()
{
	string s1 = ReadString();
	cout << "\nnumber of vowels is: " << CountVowelLetters(s1);
}*/
