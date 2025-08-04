/*#include <iostream>
#include <string>
#include <vector>
using namespace std;

string JoinString(vector<string> vString, string delim)
{
	string s1 = "";
	for (string& s : vString)
	{
		s1 = s1 + s + delim;
	}
	return s1.substr(0, s1.length() - delim.length());
}
string JoinString(string arrString[], short Length ,string delim)
{
	string s1 = "";
	for (short i = 0; i < Length; i++)
	{
		s1 = s1 + arrString[i] + delim;
	}
	return s1.substr(0, s1.length() - delim.length());
}
int main()
{
	vector<string> vString = { "Norhan", "Essam", "Omar", "Mody" };
	string arrString[] = { "Norhan", "Essam", "Omar", "Mody" };
	cout << "\nVector after join: \n";
	cout << JoinString(vString, ",");
	cout << "\nArray after join: \n";
	cout << JoinString(arrString, 4,",");

}*/