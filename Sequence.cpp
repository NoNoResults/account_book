#include "Account.h"
#include "AccountData.h"

bool CompareDateUp(Account a, Account b)
{
	return a.GetDate() < b.GetDate();
}

bool CompareDateDown(Account a, Account b)
{
	return a.GetDate() > b.GetDate();
}

bool CompareNameUp(Account a, Account b)
{
	return a.GetName() < b.GetName();
}

bool CompareNameDown(Account a, Account b)
{
	return a.GetName() > b.GetName();
}

bool CompareAmountUp(Account a, Account b)
{
	return a.GetAmount() < b.GetAmount();
}

bool CompareAmountDown(Account a, Account b)
{
	return a.GetAmount() > b.GetAmount();
}

void DateSequence(vector<Account>& data)
{
	cout << "1.升序			2.降序" << endl;
	int x;
	cin >> x;
	while (true)
	{
		switch (x)
		{
		case 1:
			sort(data.begin(), data.end(), CompareDateUp);
			ResetIndex(data);
			cout << "排完了" << endl;
			break;
		case 2:
			sort(data.begin(), data.end(), CompareDateDown);
			ResetIndex(data);
			cout << "排完了" << endl;
			break;
		default:
			cout << "输入错误" << endl;
			cin.clear();
			cin.ignore();
			cout << "请重新输入" << endl;
			cin >> x;
			continue;
		}
		break;
	}
	system("pause");
}

void NameSequence(vector<Account>& data)
{
	cout << "1.升序			2.降序" << endl;
	int x;
	cin >> x;
	while (true)
	{
		switch (x)
		{
		case 1:
			sort(data.begin(), data.end(), CompareNameUp);
			ResetIndex(data);
			cout << "排完了" << endl;
			break;
		case 2:
			sort(data.begin(), data.end(), CompareNameDown);
			ResetIndex(data);
			cout << "排完了" << endl;
			break;
		default:
			cout << "输入错误" << endl;
			cin.clear();
			cin.ignore();
			cout << "请重新输入" << endl;
			cin >> x;
			continue;
		}
		break;
	}
	system("pause");
}

void AmountSequence(vector<Account>& data)
{
	cout << "1.升序			2.降序" << endl;
	int x;
	cin >> x;
	while (true)
	{
		switch (x)
		{
		case 1:
			sort(data.begin(), data.end(), CompareAmountUp);
			ResetIndex(data);
			cout << "排完了" << endl;
			break;
		case 2:
			sort(data.begin(), data.end(), CompareAmountDown);
			ResetIndex(data);
			cout << "排完了" << endl;
			break;
		default:
			cout << "输入错误" << endl;
			cin.clear();
			cin.ignore();
			cout << "请重新输入" << endl;
			cin >> x;
			continue;
		}
		break;
	}
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