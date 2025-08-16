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
			Client = ConvertRecordToLine(Line);
			vClient.push_back(Client);

		}
		MyFile.close();
	}
	return vClient;
}
void PrintRecord(sClient Client)
{
	cout << "| " << setw(15) << left << Client.AccountNumber;
	cout << "| " << setw(10) << left << Client.PinCode;
	cout << "| " << setw(40) << left << Client.Name;
	cout << "| " << setw(12) << left << Client.Phone;
	cout << "| " << setw(12) << left << Client.AccountBalance;
}
void PrintAllClientsData(vector<sClient> vClients)
{
	cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Clients.";
	cout << "\n--------------------------------------------";
	cout << "-----------------------------------------------\n" << endl;
	cout << "| " << setw(15) << left << "Account Number";
	cout << "| " << setw(10) << left << "PinCode";
	cout << "| " << setw(40) << left << "Name";
	cout << "| " << setw(12) << left << "Phone";
	cout << "| " << setw(12) << left << "Account Balance";
	cout << "\n--------------------------------------------";
	cout << "-----------------------------------------------\n" << endl;
	for (sClient Client : vClients)
	{
		PrintRecord(Client);
		cout << endl;
	}
	cout << "\n--------------------------------------------";
	cout << "-----------------------------------------------\n" << endl;
}
int main()
{
	vector<sClient> vClients = LoadClientsDataFromFile(ClientFileName);
	PrintAllClientsData(vClients);     
	system("pause>0"); 
	return 0;
}*/