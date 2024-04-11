#include "Account.h"
#include "AccountData.h"

void Count(vector<Account>& data)
{
	cout << "请输入起始日期" << endl;
	int data1, data2;
	cin >> data1;
	cout << "请输入终止日期" << endl;
	cin >> data2;
	double income = 0, expense = 0, sum = 0;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].GetType() == '+')
		{
			income += data[i].GetAmount();
			sum += data[i].GetAmount();
		}
		if (data[i].GetAmount() == '-')
		{
			expense += data[i].GetAmount();
			sum -= data[i].GetAmount();
		}
	}
	cout << "你在这段时间内花了" << expense << "元,收入" << income << "元,结余" << sum << "元." << endl;
	system("pause");
}