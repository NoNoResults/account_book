#include "Manu.h"
#include "AccountData.h"
#include "User.h"
using namespace std;

void PrintManu()
{
	system("cls");
	cout << R"(��ӭʹ���������ϵͳ
---------------------------------------------------
1.�����������		2.������������
3.�޸���������		4.ɾ����������
5.����			6.��ʾ��ǰ������������
7.ͳ����������		8.����	
0.�˳�
---------------------------------------------------
)" << endl;
}

void AddAccount()
{
	system("cls");
	int AddAccountJudge = 1;
	while (AddAccountJudge)
	{
		cout << R"(1.����˵�		0.����)" << endl;
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
			cout << "�������,��������" << endl;
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
		cout << R"(1.����Ų���		2.�����ڲ���
3.�����Ʋ���		4.��������
0.����)" << endl;
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
			cout << "�������" << endl;
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
		cout << R"(���Ȳ���Ҫ�޸ĵ��˵�
1.����		0.����)" << endl;
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
				cout << R"(���Ȳ���Ҫ�޸ĵ��˵�
1.����Ų���		2.�����ڲ���
3.�����Ʋ���		4.��������
0.����)" << endl;
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
						cout << "�����ֹһ��,���������" << endl;
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
						cout << "�����ֹһ��,���������" << endl;
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
						cout << "�����ֹһ��,���������" << endl;
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
					cout << "�������" << endl;
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
			cout << "�������" << endl;
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
		cout << R"(���Ȳ���Ҫɾ�����˵�
1.����		0.����)" << endl;
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
				cout << R"(���Ȳ���Ҫɾ�����˵�
1.����Ų���		2.�����ڲ���
3.�����Ʋ���		4.��������
0.����)" << endl;
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
						cout << "�����ֹһ��,���������" << endl;
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
						cout << "�����ֹһ��,���������" << endl;
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
						cout << "�����ֹһ��,���������" << endl;
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
					cout << "�������" << endl;
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
			cout << "�������" << endl;
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
		cout << R"(�������
1.����������			2.����������			3.���������
0.������)" << endl;
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
			cout << "�������" << endl;
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
			cout << "�ټ�" << endl;
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
		cout << R"(1.��¼		2.ע��
0.�˳�)" << endl;
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
			cout << "�ټ�" << endl;
			system("pause");
			exit(0);
		default:
			cout << "�������" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}
	}
}