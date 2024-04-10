#include "Account.h"
#include "AccountData.h"

int IndexFind(const int index, vector<Account>& data)
{
	int adjuge = 0;
	for (int i = 0; i < data.size(); i++)
	{
		Account account = data[i];
		if (account.GetIndex() == index)
		{
			cout << account.GetIndex() << ". " << account.GetName() << " " << account.GetType() << account.GetAmount() << " " << account.GetDate() << " " << account.GetNote() << endl;
			adjuge++;
		}
	}
	if (!adjuge)
		cout << "未找到目标账单" << endl;
	return adjuge;
}

int DateFind(const int date, vector<Account>& data)
{
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
		cout << "未找到目标账单" << endl;
	return adjuge;
}

int NameFind(const string name, vector<Account>& data)
{
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
		cout << "未找到目标账单" << endl;
	return adjuge;
}

int AmountFind(const int amount, vector<Account>& data)
{
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
		cout << "未找到目标账单" << endl;
	return adjuge;
}

void PrintFind(const int index, vector<Account>& data)
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