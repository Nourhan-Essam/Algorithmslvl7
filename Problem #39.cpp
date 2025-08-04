/*#include <string>
#include <iostream>
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
int main()
{
	vector<string> vString = { "Norhan", "Essam", "Omar", "Mody" };
	cout << "\nVector after join: \n";
	cout << JoinString(vString, ",");
}*/