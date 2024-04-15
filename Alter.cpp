#include "Account.h"
#include "AccountData.h"

void Alter(int index, vector<Account>& data)
{
	system("cls");
	int AlterJudge = 1;
	while (AlterJudge)
	{
		Print(data[index - 1]);
		cout << R"(Ҫ�޸�ʲô
1.����		2.����		3.���
4.��(֧)		5.��ע		0.������)" << endl;
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			AlterName(index, data);
			break;
		case 2:
			AlterDate(index, data);
			break;
		case 3:
			AlterAmount(index, data);
			break;
		case 4:
			AlterType(index, data);
			break;
		case 5:
			AlterNote(index, data);
			break;
		case 0:
			AlterJudge = 0;
			break;
		}
	}
}

void AlterName(int index, vector<Account>& data)
{
	cout << "�������޸ĺ������" << endl;
	string name;
	cin >> name;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].GetIndex() == index)
		{
			data[i].SetName(name);
			cout << "�޸ĳɹ�" << endl;
		}
	}
}

void AlterDate(int index, vector<Account>& data)
{
	cout << "�������޸ĺ������" << endl;
	int date;
	cin >> date;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].GetIndex() == index)
		{
			data[i].SetDate(date);
			cout << "�޸ĳɹ�" << endl;
		}
	}
}

void AlterAmount(int index, vector<Account>& data)
{
	cout << "�������޸ĺ�Ľ��" << endl;
	int amount;
	cin >> amount;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].GetIndex() == index)
		{
			data[i].SetAmount(amount);
			cout << "�޸ĳɹ�" << endl;
		}
	}
}

void AlterType(int index, vector<Account>& data)
{
	cout << "�������޸ĺ����֧����" << endl;
	char type;
	cin >> type;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].GetIndex() == index)
		{
			data[i].SetType(type);
			cout << "�޸ĳɹ�" << endl;
		}
	}
}

void AlterNote(int index, vector<Account>& data)
{
	cout << "�������޸ĺ�ı�ע" << endl;
	string note;
	cin >> note;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].GetIndex() == index)
		{
			data[i].SetNote(note);
			cout << "�޸ĳɹ�" << endl;
		}
	}
}