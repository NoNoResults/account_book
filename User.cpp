#include "user.h"
#include "AccountData.h"
using namespace std;

bool Register(string& USERNAME, vector<User>& userdata)
{
	system("cls");
	string username, password;
	cout << "请输入用户名" << endl;
	cin >> username;
	for (int i = 0; i < userdata.size(); i++)
	{
		if (userdata[i].CheckUsername(username))
		{
			cout << "该用户已存在" << endl;
			system("pause");
			return false;
		}
	}
	cout << "请输入密码" << endl;
	cin >> password;
	User a(username, password);
	userdata.push_back(a);
	cout << "注册成功" << endl;
	USERNAME = username;
	system("pause");
	return true;
}

bool Login(string& USERNAME, vector<User>& userdata)
{
	system("cls");
	string username, password;
	cout << "请输入用户名" << endl;
	cin >> username;
	cout << "请输入密码" << endl;
	cin >> password;
	for (int i = 0; i < userdata.size(); i++)
	{
		if (userdata[i].CheckUsername(username) && userdata[i].CheckPassword(password))
		{
			cout << "登录成功" << endl;
			USERNAME = username;
			system("pause");
			return true;
		}
	}
	cout << "用户名或密码错误，请重新输入" << endl;
	system("pause");
	return false;
}

void SaveUserdata(const string& filename, vector<User>& userdata)
{
	ofstream file;
	file.open(filename, ios::trunc);
	if (file.is_open())
	{
		for (int i = 0; i < userdata.size(); i++)
		{
			file << userdata[i].GetUsername() << " " << userdata[i].GetPassword() << endl;
		}
	}
	file.close();
}

void GetUserdata(const string& filename, vector<User>& userdata)
{
	ifstream file;
	file.open(filename, ios::in);
	if (file.is_open())
	{
		string username, password, tmp;
		while (getline(file, tmp))
		{
			istringstream iss(tmp);
			iss >> username >> password;
			User user(username, password);
			userdata.push_back(user);
		}
	}
}
