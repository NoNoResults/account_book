#include "Manu.h"
#include "AccountData.h"
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
		cout << R"(1.����˵�		2.����)" << endl;
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			Add(Data);
			break;
		case 2:
			AddAccountJudge = 0;
			break;
		default:
			cout << "�������,��������" << endl;
			cin.clear();   // ��ջ�����
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
			IndexFind(Data);
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
			cout << "�������" << endl;
		}
	}
}

void AlterAccount()
{
	int AlterAccountJudge = 1;
	while (AlterAccountJudge)
	{
		system("cls");
		cout << R"(1.����		2.����)" << endl;
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
				cout << R"(1.����Ų���		2.�����ڲ���
3.�����Ʋ���		4.��������
0.����)" << endl;
				int x;
				cin >> x;
				switch (x)
				{
				case 1:
					if (IndexFind(Data))
					{

					}
					break;
				case 2:
					if (DateFind(Data) > 1)
					{

					}
					break;
				case 3:
					if (NameFind(Data) > 1)
					{

					}
					break;
				case 4:
					if (AmountFind(Data) > 1)
					{

					}
					break;
				case 0:
					FindAccountJudge = 0;
					break;
				default:
					cout << "�������" << endl;
				}
			}
			break; 
		}
		case 2:
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