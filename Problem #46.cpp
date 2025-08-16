/*#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct sClient {
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};
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
		vString.push_back(s1);
	}
	return vString;
}
sClient ConvertLineToRecord(string line, string separator = "#//#")
{
	sClient Client;
	vector<string> vClientData;
	vClientData = SplitString(line, separator);
	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]); //cast string to double
	return Client;
}
void PrintClientRecord(sClient Client)
{
	cout << "\n\nThe Following is the extracted client Record:\n";
	cout << "\nAccount Number: " << Client.AccountNumber;
	cout << "\nPinCode: " << Client.PinCode;
	cout << "\nName: " << Client.Name;
	cout << "\nPhone: " << Client.Phone;
	cout << "\nAccount Balance: " << Client.AccountBalance;
}
int main()
{
	string stLine = "A111#//#1234#//#Norhan#//#01099952041#//#12000";
	cout << "\nLine Record is:\n";
	cout << stLine;
	sClient Client = ConvertLineToRecord(stLine);
	PrintClientRecord(Client);
	system("pause > 0");
	return 0;
}*/