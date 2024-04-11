#include "AccountData.h"
#include "Account.h"

void Print(vector<Account>& data)
{
	for (int i = 0; i < data.size(); i++)
	{
		Account account = data[i];
		cout << account.GetIndex() << ". " << account.GetName() << " " << account.GetType() << account.GetAmount() << " " << account.GetDate() << " " << account.GetNote() << endl;
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
			Account account = data[i];
			file << account.GetIndex() << " " << account.GetName() << " " << account.GetType() << account.GetAmount() << " " << account.GetDate() << " " << account.GetNote() << endl;
		}
		cout << "����ɹ�" << endl;
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