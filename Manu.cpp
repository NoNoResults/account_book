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
			system("cls");
			Add(Data);
			break;
		case 2:
			return;
		default:
			cout << "�������" << endl;
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
		cout << R"(1.����Ų���		2.�����ڲ���
3.�����Ʋ���		4.��������
0.����)" << endl;
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			system("cls");
			cout << "���������" << endl;
			int index;
			cin >> index;
			IndexFind(index, Data);
			system("pause");
			break;
		case 2:
			system("cls");
			cout << "����������" << endl;
			int date;
			cin >> date;
			DateFind(date, Data);
			system("pause");
			break;
		case 3:
		{
			system("cls");
			cout << "����������" << endl;
			string name;
			cin >> name;
			NameFind(name, Data);
		}
		system("pause");
		break;
		case 4:
			system("cls");
			cout << "��������" << endl;
			int amount;
			cin >> amount;
			IndexFind(amount, Data);
			system("pause");
			break;
		case 0:
			return;
		default:
			cout << "�������" << endl;
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