/*#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> SplitString(string s1, string delim)
{
	vector<string> vString;
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
		vString.push_back(s1);	//adding last word of string
	}
	return vString;
}
string JoinString(vector<string> vString, string delim)
{
	string s1;
	for (string& s : vString)
	{
		s1 = s1 + s + delim;
	}
	return s1.substr(0, s1.length() - delim.length());
}
string LowerAllString(string s1)
{
	for (short i = 0; i < s1.length(); i++)
	{
		s1[i] = tolower(s1[i]);
	}
	return s1;
}
string ReplaceWordInString(string s1, string StringToReplace, string replaceTo, bool MatchCase = true )
{
	vector<string> vString = SplitString(s1, " ");
	for (string& s : vString)
	{
		if (MatchCase)
		{
			if (s == StringToReplace)
			{
				s = replaceTo;
			}
		}
		else
		{
			if (LowerAllString(s) == LowerAllString(StringToReplace))
			{
				s = replaceTo;
			}
		}
	}
	return JoinString(vString, " ");
}
int main()
{
	string s1 = "Welcome to KSA, KSA is a nice country";
	string StringToReplace = "KSA";
	string replaceTo = "Egypt";
	cout << "\nOriginal String:\n" << s1;
	cout << "\n\nReplace with match case:";
	cout << "\n" << ReplaceWordInString(s1, StringToReplace, replaceTo, false);
	system("pause>0");
}*/