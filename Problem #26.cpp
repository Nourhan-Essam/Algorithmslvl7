/*#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string s1;
	cout << "\nPlease enter a string.\n";
	getline(cin, s1);
	return s1;
}
string UpperAllString(string s1)
{
	for (short i = 0; i < s1.length(); i++)
	{
		s1[i] = toupper(s1[i]);
	}
	return s1;
}
string lowerAllString(string s1)
{
	for (short i = 0; i < s1.length(); i++)
	{
		s1[i] = tolower(s1[i]);
	}
	return s1;
}
int main()
{
	string s1 = ReadString();
	cout << "\nString After Upper: \n";
	s1 = UpperAllString(s1);
	cout << s1 << endl;
	cout << "\nString After lower: \n";
	s1 = lowerAllString(s1);
	cout << s1 << endl;
}*/