#pragma once
#include "Account.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

void Add(vector<Account>& data);
void Print(vector<Account>& data);
void Save(const string& filename, vector<Account>& data);
void Get(const string& filename, vector<Account>& data);

void PrintFind(const int index, vector<Account>& data);
int AmountFind(const int amount, vector<Account>& data);
int NameFind(const string name, vector<Account>& data);
int DateFind(const int date, vector<Account>& data);
int IndexFind(const int index, vector<Account>& data);


extern vector<Account> Data;