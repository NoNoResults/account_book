#include "Account.h"
#include "AccountData.h"

bool CompareDate(Account a, Account b)
{
	return a.GetDate() < b.GetDate();
}

bool CompareName(Account a, Account b)
{
	return a.GetName() < b.GetName();
}

bool CompareAmount(Account a, Account b)
{
	return a.GetAmount() < b.GetAmount();
}

void DateSequence(vector<Account>& data)
{
	sort(data.begin(), data.end(), CompareDate);
	ResetIndex(data);
	cout << "排完了" << endl;
	system("pause");
}

void NameSequence(vector<Account>& data)
{
	sort(data.begin(), data.end(), CompareName);
	ResetIndex(data);
	cout << "排完了" << endl;
	system("pause");
}

void AmountSequence(vector<Account>& data)
{
	sort(data.begin(), data.end(), CompareAmount);
	ResetIndex(data);
	cout << "排完了" << endl;
	system("pause");
}

void ResetIndex(vector<Account>& data)
{
	for (int i = 0; i < data.size(); i++)
	{
		int I = i + 1;
		data[i].SetIndex(I);
	}
}