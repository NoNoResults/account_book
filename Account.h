#pragma once
#include <string>
using namespace std;

class Account
{
private:
	int _index;//���
	int _date;//����
	char _type;//����
	double _amount;//���
	string _name;//����
	string _note;//��ע

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