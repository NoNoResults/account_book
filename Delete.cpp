#include "Account.h"
#include "AccountData.h"

void Delete(int index, vector<Account>& data)
{
	cout << R"(真要删除吗?
1.真的		0.开玩笑的)" << endl;
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
			cout << "删除成功" << endl;
			system("pause");
			DeleteJudge = 0;
			break;
		case 0:
			DeleteJudge = 0;
			break;
		default:
			cout << "输入错误" << endl;
			system("pause");
			cin.clear();
			cin.ignore();
			continue;
		}
	}
}