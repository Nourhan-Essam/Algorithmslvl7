/*#include <string>
#include<iostream>
#include<vector>
using namespace std;

string ReplaceWordInString(string s1, string StringToReplace, string replaceTo)
{
	short pos = s1.find(StringToReplace);
	while (pos != std::string::npos)
	{
		s1 = s1.replace(pos, StringToReplace.length(), replaceTo);
		pos = s1.find(StringToReplace);		//find next
	}
	return s1;
}
int main()
{
	string s1 = "Welcome to KSA, KSA is a nice country";
	string StringToReplace = "KSA";
	string replaceTo = "Egypt";
	cout << "\nOriginal String:\n" << s1;
	cout << "\n\nString After Replacement:\n";
	cout << "\n" << ReplaceWordInString(s1, StringToReplace, replaceTo);
	system("pause > 0");
}*/