#include "Account.h"
#include "AccountData.h"
using namespace std;

void Add(vector<Account>& data)
{
	system("cls");
	string name, note;
	int date;
	double amount;
	char type, AddJudge;
	cout << "�����˵���:" << endl;
	cin >> name;
	cout << R"(��������:(20240101))" << endl;
	while (!(cin >> date))
	{
		cout << "�������,��������" << endl;
		cin.clear();
		cin.ignore();
	}
	cout << "������:(+100 or -100)" << endl;
	cin >> type >> amount;
	Account	a(date, type, amount, name);
	cout << "Ҫ��ӱ�ע�𣿣�Y or N��" << endl;
	cin >> AddJudge;
	if (AddJudge == 'Y' || AddJudge == 'y')
	{
		cout << "�����뱸ע:" << endl;
		cin >> note;
		a.SetNote(note);
	}
	else if (AddJudge == 'N' || AddJudge == 'n')
		;
	else
		cout << "���ڸ�ʲô��" << endl;
	int index;
	index = data.size() + 1;
	a.SetIndex(index);
	data.push_back(a);
	return;
}