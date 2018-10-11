#pragma once
#include "BankingSystem.h"

using namespace std;

class Account
{
private:
	int accID;
	int balance;
	string cusName;

public:
	Account(int ID, int money, string name);
	Account(const Account & ref);
	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
};