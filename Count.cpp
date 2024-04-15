#include "Account.h"
#include "AccountData.h"

void Count(vector<Account>& data)
{
	system("cls");
	cout << "请输入起始日期" << endl;
	int date1, date2;
	while (!(cin >> date1) || !CheckDate(date1))
	{
		cout << "输入错误,重新输入" << endl;
		cin.clear();
		cin.ignore();
	}
	cout << "请输入终止日期" << endl;
	while (!(cin >> date2) || !CheckDate(date2))
	{
		cout << "输入错误,重新输入" << endl;
		cin.clear();
		cin.ignore();
	}
	double income = 0, expense = 0, sum = 0;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].GetType() == '+' && data[i].GetDate() >= date1 && data[i].GetDate() <= date2)
		{
			income += data[i].GetAmount();
			sum += data[i].GetAmount();
		}
		if (data[i].GetType() == '-' && data[i].GetDate() >= date1 && data[i].GetDate() <= date2)
		{
			expense += data[i].GetAmount();
			sum -= data[i].GetAmount();
		}
	}
	cout << "你在这段时间内花了" << expense << "元,收入" << income << "元,结余" << sum << "元." << endl;
	system("pause");
}