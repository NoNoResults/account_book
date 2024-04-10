#include "Manu.h"
#include "AccountData.h"
using namespace std;
vector<Account> Data;

int main()
{
	Get("data.txt", Data);
	while (true)
	{
		PrintManu();
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			AddAccount();
			break;
		case 2:
			FindAccount();
			break;
		case 3:
			AlterAccount();
			break;
		case 4:
			DeleteAccount();
			break;
		case 5:
			SequenceAccount();
			break;
		case 6:
			PrintAccount();
			break;
		case 7:
			CountAccount();
			break;
		case 0:
			SaveAccount(Data);
			cout << "ты╪Ш" << endl;
			system("pause");
			exit(0);
		}
	}
	return 0;
}