#include "Account.h"
#include "AccountData.h"

int IndexFind(vector<Account>& data)
{
	cout << "���������" << endl;
	int index;
	cin >> index;
	int adjuge = 0;
	for (int i = 0; i < data.size(); i++)
	{
		Account account = data[i];
		if (account.GetIndex() == index)
		{
			adjuge = account.GetIndex();
		}
	}
	if (!adjuge)
	{
		cout << "δ�ҵ�Ŀ���˵�" << endl;
		system("pause");
	}
	return adjuge;
}

int DateFind(vector<Account>& data)
{
	system("cls");
	cout << "����������" << endl;
	int date;
	cin >> date;
	int adjuge = 0;
	for (int i = 0; i < data.size(); i++)
	{
		Account account = data[i];
		if (account.GetDate() == date)
		{
			cout << account.GetIndex() << ". " << account.GetName() << " " << account.GetType() << account.GetAmount() << " " << account.GetDate() << " " << account.GetNote() << endl;
			adjuge++;
		}
	}
	if (!adjuge)
		cout << "δ�ҵ�Ŀ���˵�" << endl;
	system("pause");
	return adjuge;
}

int NameFind(vector<Account>& data)
{
	system("cls");
	cout << "����������" << endl;
	string name;
	cin >> name;
	int adjuge = 0;
	for (int i = 0; i < data.size(); i++)
	{
		Account account = data[i];
		if (account.GetName() == name)
		{
			cout << account.GetIndex() << ". " << account.GetName() << " " << account.GetType() << account.GetAmount() << " " << account.GetDate() << " " << account.GetNote() << endl;
			adjuge++;
		}
	}
	if (!adjuge)
		cout << "δ�ҵ�Ŀ���˵�" << endl;
	system("pause");
	return adjuge;
}

int AmountFind(vector<Account>& data)
{
	system("cls");
	cout << "��������" << endl;
	int amount;
	cin >> amount;
	int adjuge = 0;
	for (int i = 0; i < data.size(); i++)
	{
		Account account = data[i];
		if (account.GetAmount() == amount)
		{
			cout << account.GetIndex() << ". " << account.GetName() << " " << account.GetType() << account.GetAmount() << " " << account.GetDate() << " " << account.GetNote() << endl;
			adjuge++;
		}
	}
	if (!adjuge)
		cout << "δ�ҵ�Ŀ���˵�" << endl;
	system("pause");
	return adjuge;
}

void PrintFind(int index, vector<Account>& data)
{
	for (int i = 1; i < data.size(); i++)
	{
		Account account = data[i];
		if (account.GetIndex() == index)
		{
			cout << account.GetIndex() << ". " << account.GetName() << " " << account.GetType() << account.GetAmount() << " " << account.GetDate() << " " << account.GetNote() << endl;
		}
	}
}