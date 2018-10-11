#include "Account.h"
#include "BankingSystem.h"

//생성자
Account::Account(int ID, int money, string name)
	: accID(ID), balance(money), cusName(name)
{

}

Account::Account(const Account & ref)
	: accID(ref.accID), balance(ref.balance), cusName(ref.cusName)
{

}

int Account::GetAccID() const
{
	return accID;
}

void Account::Deposit(int money)
{
	balance += money;
}

int Account::Withdraw(int money)
{
	if (balance < money)
	{
		return 0;
	}

	balance -= money;
	return money;
}

void Account::ShowAccInfo() const
{
	cout << "계좌ID: " << accID << endl;
	cout << "이  름: " << cusName << endl;
	cout << "잔  액: " << balance << endl;
}
