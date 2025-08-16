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
sClient ReadNewClient()
{
	sClient Client;
	cout << "Enter Account Number? ";
	getline(cin, Client.AccountNumber);
	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);
	cout << "Enter Your Name? ";
	getline(cin, Client.Name);
	cout << "Enter Your Phone Number? ";
	getline(cin, Client.Phone);
	cout << "Enter Account Balance? ";
	cin >> Client.AccountBalance;
	return Client;
}
string ConvertRecordToLine(sClient Client, string separator = "#//#")
{
	string stClientRecord = "";
	stClientRecord += Client.AccountNumber + separator;
	stClientRecord += Client.PinCode + separator;
	stClientRecord += Client.Name + separator;
	stClientRecord += Client.Phone + separator;
	stClientRecord +=to_string(Client.AccountBalance);
	return stClientRecord;
}
int main()
{
	cout << "\nPlease Enterf Cient Data: \n\n";
	sClient Client;
	Client = ReadNewClient();
	cout << "\n\nClient Record for saving is:\n";
	cout << ConvertRecordToLine(Client);
	system("pause > 0");
	return 0;
}*/