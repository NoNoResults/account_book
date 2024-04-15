#include "Account.h"
#include "AccountData.h"

void Alter(int index, vector<Account>& data)
{
	system("cls");
	int AlterJudge = 1;
	while (AlterJudge)
	{
		Print(data[index - 1]);
		cout << R"(要修改什么
1.名称		2.日期		3.金额
4.收(支)		5.备注		0.不改了)" << endl;
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
	cout << "请输入修改后的名称" << endl;
	string name;
	cin >> name;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].GetIndex() == index)
		{
			data[i].SetName(name);
			cout << "修改成功" << endl;
		}
	}
}

void AlterDate(int index, vector<Account>& data)
{
	cout << "请输入修改后的日期" << endl;
	int date;
	cin >> date;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].GetIndex() == index)
		{
			data[i].SetDate(date);
			cout << "修改成功" << endl;
		}
	}
}

void AlterAmount(int index, vector<Account>& data)
{
	cout << "请输入修改后的金额" << endl;
	int amount;
	cin >> amount;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].GetIndex() == index)
		{
			data[i].SetAmount(amount);
			cout << "修改成功" << endl;
		}
	}
}

void AlterType(int index, vector<Account>& data)
{
	cout << "请输入修改后的收支类型" << endl;
	char type;
	cin >> type;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].GetIndex() == index)
		{
			data[i].SetType(type);
			cout << "修改成功" << endl;
		}
	}
}

void AlterNote(int index, vector<Account>& data)
{
	cout << "请输入修改后的备注" << endl;
	string note;
	cin >> note;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].GetIndex() == index)
		{
			data[i].SetNote(note);
			cout << "修改成功" << endl;
		}
	}
}