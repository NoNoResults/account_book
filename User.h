#pragma once
#include "AccountData.h"
using namespace std;

class User
{
private:
	string _Username;
	string _Password;

public:	
	User(){}

	User(const string& username, const string& password)
		: _Username(username), _Password(password) {}

	string GetUsername()
	{
		return _Username;
	}
	
	void SetUsername(const string& username)
	{
		_Username = username;
	}

	string GetPassword()
	{
		return _Password;
	}

	void SetPassword(const string& password)
	{
		_Password = password;
	}

	bool CheckUsername(const string& username)
	{
		if (username == _Username)
			return true;
		return false;
	}

	bool CheckPassword(const string& password)
	{
		if (password == _Password)
			return true;
		return false;
	}
};

extern vector<User> Userdata;

void SaveUserdata(const string& filename, vector<User>& userdata);
void GetUserdata(const string& filename, vector<User>& userdata);
bool Register(vector<User>& userdata);
bool Login(vector<User>& userdata);