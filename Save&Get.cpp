#include "AccountData.h"
#include "Account.h"

void Print(vector<Account>& data)
{
	for (int i = 0; i < data.size(); i++)
	{
		Account account = data[i];
		Print(data[i]);
	}
	system("pause");
}

void Save(const string& filename, vector<Account>& data)
{
	ofstream file;
	file.open(filename, ios::trunc);
	if (file.is_open())
	{
		for (int i = 0; i < data.size(); i++)
		{
			file << data[i].GetIndex() << " " << data[i].GetName() << " " << data[i].GetType() << data[i].GetAmount() << " " << data[i].GetDate() << " " << data[i].GetNote() << endl;
		}
		cout << "±£´æ³É¹¦" << endl;
		system("pause");
		file.close();
	}

}

void Get(const string& filename, vector<Account>& data)
{
	ifstream file;
	file.open(filename, ios::in);
	if (file.is_open())
	{
		int index, date;
		double amount;
		string name, note, tmp;
		char type;
		while (getline(file, tmp))
		{
			istringstream iss(tmp);
			iss >> index >> name >> type >> amount >> date >> note;
			Account a(date, type, amount, name);
			a.SetIndex(index);
			a.SetNote(note);
			data.push_back(a);
		}
	}
}