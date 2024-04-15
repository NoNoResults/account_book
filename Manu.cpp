#include "Manu.h"
#include "AccountData.h"
#include "User.h"
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
			system("pause");
			cin.clear();
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
		{
			int a = IndexFind(Data);
			if (a)
			{
				PrintFind(a, Data);
				system("pause");
			}
			break;
		}
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
			system("pause");
			cin.clear();
			cin.ignore();
			continue;
		}
	}
}

void AlterAccount()
{
	int AlterAccountJudge = 1;
	while (AlterAccountJudge)
	{
		system("cls");
		cout << R"(请先查找要修改的账单
1.查找		0.返回)" << endl;
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
				cout << R"(请先查找要修改的账单
1.按序号查找		2.按日期查找
3.按名称查找		4.按金额查找
0.返回)" << endl;
				int x;
				cin >> x;
				cin.clear();
				cin.ignore();
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
					system("pause");
					cin.clear();
					cin.ignore();
					continue;
				}
			}
			break; 
		}
		case 0:
			AlterAccountJudge = 0;
			break;
		default:
			cout << "输入错误" << endl;
			system("pause");
			cin.clear();
			cin.ignore();
			continue;
		}
	}
}

void DeleteAccount()
{
	int DeleteAccountJudge = 1;
	while (DeleteAccountJudge)
	{
		system("cls");
		cout << R"(请先查找要删除的账单
1.查找		0.返回)" << endl;
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
				cout << R"(请先查找要删除的账单
1.按序号查找		2.按日期查找
3.按名称查找		4.按金额查找
0.返回)" << endl;
				int x;
				cin >> x;
				cin.clear();
				cin.ignore();
				switch (x)
				{
				case 1:
				{
					int a = IndexFind(Data);
					if (a)
					{
						Delete(a, Data);
					}
					break;
				}
				case 2:
				{
					int a = DateFind(Data);
					if (a > 1)
					{
						cout << "结果不止一个,请继续查找" << endl;
						system("pause");
						int b = IndexFind(Data);
						if (b)
						{
							Delete(b, Data);
						}
					}
					if (a == 1)
					{
						int b = IndexFind(Data);
						Delete(b, Data);
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
							Delete(b, Data);
						}
					}
					if (a == 1)
					{
						int b = IndexFind(Data);
						Delete(b, Data);
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
							Delete(b, Data);
						}
					}
					if (a == 1)
					{
						int b = IndexFind(Data);
						Delete(b, Data);
					}
				}
				break;
				case 0:
					FindAccountJudge = 0;
					break;
				default:
					cout << "输入错误" << endl;
					system("pause");
					cin.clear();
					cin.ignore();
					continue;
				}
			}
			break;
		}
		case 0:
			DeleteAccountJudge = 0;
			break;
		default:
			cout << "输入错误" << endl;
			system("pause");
			cin.clear();
			cin.ignore();
			continue;
		}
	}
}

void PrintAccount()
{
	system("cls");
	Print(Data);
}

void SequenceAccount()
{
	int SequenceAccountJudge = 1;
	while (SequenceAccountJudge)
	{
		system("cls");
		cout << R"(如何排序
1.按日期排序			2.按名称排序			3.按金额排序
0.不排了)" << endl;
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			DateSequence(Data);
			break;
		case 2:
			NameSequence(Data);
			break;
		case 3:
			AmountSequence(Data);
			break;
		case 0:
			SequenceAccountJudge = 0;
			break;
		default:
			cout << "输入错误" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}
	}
}

void CountAccount()
{
	Count(Data);
}

void SaveAccount(vector<Account>& data)
{
	Save("data.txt", data);
}

void Start()
{

	Get("data.txt", Data);
	while (true)
	{
		PrintManu();
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			AddAccount();
			break;
		case 2:
			FindAccount();
			break;
		case 3:
			AlterAccount();
			break;
		case 4:
			DeleteAccount();
			break;
		case 5:
			SequenceAccount();
			break;
		case 6:
			PrintAccount();
			break;
		case 7:
			CountAccount();
			break;
		case 8:
			SaveAccount(Data);
			break;
		case 0:
			cout << "再见" << endl;
			system("pause");
			exit(0);
		}
	}
}

void UserManu()
{
	GetUserdata("userdata.txt", Userdata);
	while (true)
	{
		system("cls");
		cout << R"(1.登录		2.注册
0.退出)" << endl;
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			if (Login(Userdata))
			{
				SaveUserdata("userdata.txt", Userdata);
				Start();
			}
			break;
		case 2:
			if (Register(Userdata))
			{
				SaveUserdata("userdata.txt", Userdata);
				Start();
			}
			break;
		case 0:
			cout << "再见" << endl;
			system("pause");
			exit(0);
		default:
			cout << "输入错误" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}
	}
}