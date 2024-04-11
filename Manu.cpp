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
7.统计账务数据		
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
		cout << R"(1.添加账单		0.返回)" << endl;
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			Add(Data);
			break;
		case 0:
			AddAccountJudge = 0;
			break;
		default:
			cout << "输入错误,重新输入" << endl;
			cin.clear();   // 清空缓冲区
			cin.ignore();
			continue;
		}
	}
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
			PrintFind(IndexFind(Data), Data);
			break;
		case 2:
			DateFind(Data);
			break;
		case 3:
			NameFind(Data);
			break;
		case 4:
			AmountFind(Data);
			break;
		case 0:
			FindAccountJudge = 0;
			break;
		default:
			cout << "输入错误" << endl;
		}
	}
}

void AlterAccount()
{
	int AlterAccountJudge = 1;
	while (AlterAccountJudge)
	{
		system("cls");
		cout << R"(1.查找		0.返回)" << endl;
		int x1;
		cin >> x1;
		switch (x1)
		{
		case 1:
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
				{
					int a = IndexFind(Data);
					if (a)
					{
						Alter(a, Data);
					}
					break;
				}
				case 2:
				{
					int a = DateFind(Data);
					if (a > 1)
					{
						cout << "结果不止一个,请继续查找"  << endl;
						system("pause");
						int b = IndexFind(Data);
						if (b)
						{
							Alter(b, Data);
						}
					}
					if (a == 1)
					{
						int b = IndexFind(Data);
						Alter(b, Data);
					}
				}
					break;
				case 3:
				{
					int a = NameFind(Data);
					if (a > 1)
					{
						cout << "结果不止一个,请继续查找" << endl;
						system("pause");
						int b = IndexFind(Data);
						if (b)
						{
							Alter(b, Data);
						}
					}
					if (a == 1)
					{
						int b = IndexFind(Data);
						Alter(b, Data);
					}
				}
					break;
				case 4:
				{
					int a = AmountFind(Data);
					if (a > 1)
					{
						cout << "结果不止一个,请继续查找" << endl;
						system("pause");
						int b = IndexFind(Data);
						if (b)
						{
							Alter(b, Data);
						}
					}
					if (a == 1)
					{
						int b = IndexFind(Data);
						Alter(b, Data);
					}
				}
					break;
				case 0:
					FindAccountJudge = 0;
					break;
				default:
					cout << "输入错误" << endl;
				}
			}
			break; 
		}
		case 0:
			AlterAccountJudge = 0;
			break;
		}
	}
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