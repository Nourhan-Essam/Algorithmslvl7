/*#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

const string ClientFileName = "Client.txt";
struct sClient 
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};
sClient ReadData()
{
	sClient Client;
	cout << "Enter Account Number? ";
	getline(cin >> ws, Client.AccountNumber); //usage of std::ws will extract all the whitespace character
	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);
	cout << "Enter Your Name? ";
	getline(cin, Client.Name);
	cout << "Enter Your Phone? ";
	getline(cin, Client.Phone);
	cout << "Enter Account Balance? ";
	cin >> Client.AccountBalance;
	return Client;
}
string ConvertRecordToLine(sClient Client, string separator = "#")
{
	string stClientRecord = "";
	stClientRecord += Client.AccountNumber + separator;
	stClientRecord += Client.PinCode + separator;
	stClientRecord += Client.Name + separator;
	stClientRecord += Client.Phone + separator;
	stClientRecord += Client.AccountBalance;
	return stClientRecord;
}
void AddDataToLineFile(string fileName, string stDataLine)
{
	fstream MyFile;
	MyFile.open(fileName, ios::out | ios::app);
	if (MyFile.is_open())
	{
		MyFile << stDataLine;
		MyFile.close();
	}
}
void AddNewClient()
{
	sClient Client;
	Client = ReadData();
	AddDataToLineFile(ClientFileName, ConvertRecordToLine(Client));
}
void AddClients()
{
	char AddMore = 'Y';
	do
	{
		system("cls");
		cout << "Adding New Client:\n\n";
		AddNewClient();
		cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";
		cin >> AddMore;
	} while (toupper(AddMore) == 'Y');
}
int main()
{
	AddClients();
	system("pause > 0");
	return 0;
}*/