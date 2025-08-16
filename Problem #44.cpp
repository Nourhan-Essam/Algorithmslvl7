/*#include <iostream>
#include <string>
#include <vector>
using namespace std;

string RemovePunctuationsFromString(string s1)
{
	string s2 = "";
	for (short i = 0; i < s1.length(); i++)
	{
		if (!ispunct(s1[i]))
		{
			s2 += s1[i];
		}
	}
	return s2;
}
int main()
{
	string s1 = "Wlcome to Egypt, Egypt is a nice Country. Egypt has been known by it's civilization";
	cout << "\nOriginal String:\n" << s1;
	cout << "\n\nPunctuations Removed:\n" << RemovePunctuationsFromString(s1);
	system("pause > 0");
}*/