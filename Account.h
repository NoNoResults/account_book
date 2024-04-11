#pragma once
#include <string>
using namespace std;

class Account
{
private:
	int _index;//序号
	int _date;//日期
	char _type;//类型
	double _amount;//金额
	string _name;//名称
	string _note;//备注

public:
	Account(){}
	Account(const int& date, const char& type, const double& amount, const string& name)
		:_date(date), _type(type), _amount(amount), _name(name), _note("NULL"){}

	void SetIndex(int& index)
	{
		_index = index;
	}

	int GetIndex()
	{
		return _index;
	}

	void SetDate(int& date)
	{
		_date = date;
	}

	int GetDate()
	{
		return _date;
	}
	
	void SetType(char& type)
	{
		_type = type;
	}

	char GetType()
	{
		return _type;
	}
	
	void SetAmount(int& amount)
	{
		_amount = amount;
	}

	double GetAmount()
	{
		return _amount;
	}

	void SetName(string& name)
	{
		_name = name;
	}

	string GetName()
	{
		return _name;
	}
	
	void SetNote(string& note)
	{
		_note = note;
	}

	string GetNote()
	{
		return _note;
	}

};