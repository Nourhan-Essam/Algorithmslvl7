/*#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string s1;
	cout << "Enter your string.\n";
	getline(cin, s1);
	return s1;
}
short CountWords(string s1)
{
	string delim = " ";
	short counter = 0;
	short pos = 0;
	string sWord;
	while ((pos = s1.find(delim)) != std::string::npos)
	{
		sWord = s1.substr(0, pos);
		if (sWord != "")
		{
			counter++;
		}
		s1.erase(0, pos + delim.length());
	}
	if (s1 != "")
	{
		counter++;
	}
	return counter;
}
int main()
{
	string s1 = ReadString();
	cout << "\nThe number of words in your string is: ";
	cout << CountWords(s1);
}*/