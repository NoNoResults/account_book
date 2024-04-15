#pragma once
#include <iostream>
#include <stdlib.h>
#include "AccountData.h"
using namespace std;

void PrintManu();
void AddAccount();
void FindAccount();
void AlterAccount();
void DeleteAccount();
void PrintAccount();
void SequenceAccount();
void CountAccount();
void SaveAccount(const string& filename, vector<Account>& data);
void Start(const string& filename);
void UserManu();


