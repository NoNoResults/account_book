#include "Account.h"
#include "AccountData.h"

void Delete(int index, vector<Account>& data)
{
	cout << R"(��Ҫɾ����?
1.���		0.����Ц��)" << endl;
	int DeleteJudge = 1;
	while (DeleteJudge)
	{
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			for (int i = 0; i < data.size(); i++)
			{
				if (data[i].GetIndex() == index)
				{
					data.erase(data.begin() + i);
				}
			}
			for (int i = 0; i < data.size(); i++)
			{
				int I = i + 1;
				data[i].SetIndex(I);
			}
			cout << "ɾ���ɹ�" << endl;
			system("pause");
			DeleteJudge = 0;
			break;
		case 0:
			DeleteJudge = 0;
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