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
	cout << "输入账单名:" << endl;
	cin >> name;
	cout << R"(输入日期:(20240101))" << endl;
	while (!(cin >> date) || !CheckDate(date))
	{
		cout << "输入错误,重新输入" << endl;
		cin.clear();
		cin.ignore();
	}
	cout << "输入金额:(+100 or -100)" << endl;
	cin >> type >> amount;
	Account	a(date, type, amount, name);
	cout << "要添加备注吗？（Y or N）" << endl;
	cin >> AddJudge;
	if (AddJudge == 'Y' || AddJudge == 'y')
	{
		cout << "请输入备注:" << endl;
		cin >> note;
		a.SetNote(note);
	}
	else if (AddJudge == 'N' || AddJudge == 'n')
		;
	else
		cout << "你在干什么？" << endl;
	int index;
	index = data.size() + 1;
	a.SetIndex(index);
	data.push_back(a);
	return;
}

bool CheckDate(int date)
{
	int x = date;
	int day = x % 100;
	x /= 100;
	int month = x % 100;
	x /= 100;
	int year = x;
	if (year > 0 && year < 10000 && month > 0 && month < 13 && day > 0 && day <= (days[month] + is_leap(year)))
		return true;
	return false;
}

bool is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year / 400 == 0)
		return 1;
	return 0;
}