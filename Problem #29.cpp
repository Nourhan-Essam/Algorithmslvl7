/*#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string s1;
	cout << "Please enter a string: \n";
	getline(cin, s1);
	return s1;
}
enum enWhatToConvert { upper = 0, lower = 1, All = 3 };
short CountLetters(string s1, enWhatToConvert whatToConvert = enWhatToConvert::All)
{
	if (whatToConvert == enWhatToConvert::All)
	{
		return s1.length();
	}
	short counter = 0;
	for (short i = 0; i <s1.length(); i++)
	{
		if (whatToConvert == enWhatToConvert::upper && isupper(s1[i]))
			counter++;
		if (whatToConvert == enWhatToConvert::lower && islower(s1[i]))
			counter++;
	}
	return counter;
}
int main()
{
	string s1 = ReadString();
	cout << "\nString Length = " << CountLetters(s1);
	cout << "\n Capital Letters : " << CountLetters(s1, enWhatToConvert::upper);
	cout << "\n Small Letters : " << CountLetters(s1, enWhatToConvert::lower);
}*/