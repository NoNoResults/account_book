#include "Account.h"
#include "AccountData.h"

void Count(vector<Account>& data)
{
	system("cls");
	cout << "��������ʼ����" << endl;
	int date1, date2;
	cin >> date1;
	cout << "��������ֹ����" << endl;
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
	cout << "�������ʱ���ڻ���" << expense << "Ԫ,����" << income << "Ԫ,����" << sum << "Ԫ." << endl;
	system("pause");
}