#include "Manu.h"
#include "AccountData.h"
using namespace std;

void PrintManu()
{
	system("cls");
	cout << R"(欢迎使用账务管理系统
---------------------------------------------------
1.添加账务数据		2.查找账务数据
3.修改账务数据		4.删除帐务数据
5.排序			6.显示当前所有账务数据
7.统计账务数据		8.保存
0.退出
---------------------------------------------------
)" << endl;
}

void AddAccount()
{
	system("cls");
	int AddAccountJudge = 1;
	while (AddAccountJudge)
	{
		cout << R"(1.添加账单		2.返回)" << endl;
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			system("cls");
			Add(Data);
			break;
		case 2:
			return;
		default:
			cout << "输入错误" << endl;
		}
	}
	return;
}

void FindAccount()
{
	int FindAccountJudge = 1;
	while (FindAccountJudge)
	{
		system("cls");
		cout << R"(1.按序号查找		2.按日期查找
3.按名称查找		4.按金额查找
0.返回)" << endl;
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			system("cls");
			cout << "请输入序号" << endl;
			int index;
			cin >> index;
			IndexFind(index, Data);
			system("pause");
			break;
		case 2:
			system("cls");
			cout << "请输入日期" << endl;
			int date;
			cin >> date;
			DateFind(date, Data);
			system("pause");
			break;
		case 3:
		{
			system("cls");
			cout << "请输入名称" << endl;
			string name;
			cin >> name;
			NameFind(name, Data);
		}
		system("pause");
		break;
		case 4:
			system("cls");
			cout << "请输入金额" << endl;
			int amount;
			cin >> amount;
			IndexFind(amount, Data);
			system("pause");
			break;
		case 0:
			return;
		default:
			cout << "输入错误" << endl;
		}
	}
}

void AlterAccount()
{

}

void DeleteAccount()
{

}

void PrintAccount()
{
	system("cls");
	Print(Data);
}

void SequenceAccount()
{

}

void CountAccount()
{

}

void SaveAccount(vector<Account>& data)
{
	Save("data.txt", data);
}