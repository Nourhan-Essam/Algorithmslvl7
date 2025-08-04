/*#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString()
{
	string s1;
	cout << "Please enter a string.\n";
	getline(cin, s1);
	return s1;
}
vector <string> splitString(string s1, string delim)
{
	vector <string> vString;
	short pos = 0;
	string sWord;
	while ((pos = s1.find(delim)) != std::string::npos)
	{
		sWord = s1.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		s1.erase(0, pos + delim.length());
	}
	if (s1 != "")
	{
		vString.push_back(s1);
	}
	return vString;
}
int main()
{
	vector <string> vString;
	vString = splitString(ReadString(), " ");
	cout << "\nTokens = " << vString.size();
	for (string& s : vString)
	{
		cout << s << endl;
	}
*/