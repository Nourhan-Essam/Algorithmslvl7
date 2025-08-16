/*#include<iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString()
{
	string s1;
	cout << "Please Enter your string?\n";
	getline(cin, s1);
	return s1;
}
vector<string> SplitString(string s1, string delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord;
	while ((pos = s1.find(delim)) != std::string::npos)
	{
		sWord = s1.substr(0, pos);   //store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		s1.erase(0, pos + delim.length());	//erase() until position and move to next word
	}
	if (s1 != "")
	{
		vString.push_back(s1); 
	}
	return vString;
}
string ReverseWordInString(string s1)
{
	vector<string> vString;
	string s2 = "";
	vString = SplitString(s1, " ");
	vector<string>::iterator iter = vString.end();	//declare iterator
	while (iter != vString.begin())
	{
		--iter;
		s2 += *iter + " ";
	}
	s2 = s2.substr(0, s2.length() - 1);	//remove last space
	return s2;
}
int main()
{
	string s1 = ReadString();
	cout << "\n\nString After Reversing Words:";
	cout << "\n" << ReverseWordInString(s1);
	system("pause>0");
}*/