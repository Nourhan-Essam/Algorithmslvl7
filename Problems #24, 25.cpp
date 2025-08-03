/*#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string s1;
	cout << "Please enter a string : \n";
	getline(cin, s1);
	return s1;
}
string Convertfirstletter(string s1)
{
	bool isFirstLetter = true;
	for (short i = 0; i < s1.length(); i++)
	{
		if (s1[i] != ' ' && isFirstLetter)
		{
			//s1[i] = toupper(s1[i]);  #24
			s1[i] = tolower(s1[i]); // #25
		}
		isFirstLetter = (s1[i] == ' ' ? true : false);
	}
	return s1;
}
int main()
{
	string s1 = ReadString();
	cout << "\nString after Conversion : \n";
	s1 = Convertfirstletter(s1);
	cout << s1 << endl;
}*/