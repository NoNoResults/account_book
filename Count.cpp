#include "Account.h"
#include "AccountData.h"

void Count(vector<Account>& data)
{
	cout << "��������ʼ����" << endl;
	int data1, data2;
	cin >> data1;
	cout << "��������ֹ����" << endl;
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
	cout << "�������ʱ���ڻ���" << expense << "Ԫ,����" << income << "Ԫ,����" << sum << "Ԫ." << endl;
	system("pause");
}