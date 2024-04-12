#include "Account.h"
#include "AccountData.h"

void Count(vector<Account>& data)
{
	system("cls");
	cout << "请输入起始日期" << endl;
	int date1, date2;
	cin >> date1;
	cout << "请输入终止日期" << endl;
	cin >> date2;
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