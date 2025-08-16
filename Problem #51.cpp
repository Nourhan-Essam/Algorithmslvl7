/*#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

const string ClientFileName = "Client.txt";
struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
	bool MarkForDelete = true;
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
vector<sClient> LoadClientsDataFromFile(string FileName)
{
	vector<sClient> vClient;
	fstream MyFile;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
	{
		string Line;
		sClient Client;
		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClient.push_back(Client);
		}
		MyFile.close();
	}
	else
	{
		cout << "Error opening file: " << FileName << endl;
	}
	return vClient;
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
bool FindClientByAccountNumber(string AccountNumber, vector<sClient> vClients, sClient& Client)
{

	for (sClient C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}
	}
	return false;
}
sClient ChangeClientRecord(string AccountNumber)
{
	sClient Client;
	Client.AccountNumber == AccountNumber;
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
vector<sClient> SaveClientsDataForFile(string fileName, vector<sClient> vClients)
{
	fstream MyFile;
	MyFile.open(fileName, ios::out); //overwrite
	string DataLine;
	if (MyFile.is_open())
	{
		for (sClient C : vClients)
		{
			if (C.MarkForDelete == false)
			{
				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;
			}
		}
		MyFile.close();
	}
	return vClients;
}
bool UpdateClientByAccountNumber(string AccountNumber, vector<sClient>& vClients)
{
	sClient Client;
	char Answer = 'n';
	if (FindClientByAccountNumber(AccountNumber, vClients, Client))
	{
		PrintClientRecord(Client);
		cout << "\n\nAre you sure you want to update this client? (y/n): ";
		cin >> Answer;
		if (Answer == 'Y' || Answer == 'y')
		{
			for (sClient & C : vClients)
			{
				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClientRecord(AccountNumber);
					break;
				}
			}
			SaveClientsDataForFile(ClientFileName, vClients);
			cout << "\n\nClient Data Updated Successfully!\n";
		}
	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!\n";
		return false;
	}
}
string ReadClientAccountNumber()
{
	string AccountNumber = "";
	cout << "\nPlease Enter Account Number? ";
	cin >> AccountNumber;
	return AccountNumber;
}
int main()
{
	vector<sClient> vClients = LoadClientsDataFromFile(ClientFileName);
	string AccountNumber = ReadClientAccountNumber();
	UpdateClientByAccountNumber(AccountNumber, vClients);
	system("pause>0");
	return 0;
}*/