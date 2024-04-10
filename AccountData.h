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
int AmountFind(vector<Account>& data);
int NameFind(vector<Account>& data);
int DateFind(vector<Account>& data);
int IndexFind(vector<Account>& data);

void Alter(vector<Account>& data);


extern vector<Account> Data;