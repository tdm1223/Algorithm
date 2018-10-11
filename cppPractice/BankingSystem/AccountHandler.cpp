#include "AccountHandler.h"
#include "BankingSystem.h"
#include "NormalAccount.h"
#include "Account.h"
#include "HighCreditAccount.h"

void AccountHandler::ShowMenu() const
{
	cout << "-----Menu------" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입    금" << endl;
	cout << "3. 출    금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "---------------" << endl;
}

//계좌 생성
void AccountHandler::MakeAccount()
{
	int sel;
	cout << "[계좌종류선택]" << endl;
	cout << "1.보통예금계좌 "<<"2.신용신뢰계좌 "<<"3.취소" << endl;
	cout << "선택: ";
	cin >> sel;

	if (sel == NORMAL)
	{
		MakeNormalAccount();
	}
	else if (sel == CREDIT)
	{
		MakeCreditAccount();
	}
	else if (sel == 3)
	{
		cout << endl;
	}
	else
	{
		cout << "올바른 값을 입력하세요" << endl << endl;
		MakeAccount();
	}
}

void AccountHandler::MakeNormalAccount()
{
	int id;
	string name;
	int balance;
	int interRate;

	cout << "[보통예금계좌 개설]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "이  름: ";	cin >> name;
	cout << "입금액: ";	cin >> balance;
	cout << "이자율: ";	cin >> interRate;
	cout << endl;

	accArr[accNum++] = new NormalAccount(id, balance, name, interRate);
}

void AccountHandler::MakeCreditAccount()
{
	int id;
	string name;
	int balance;
	int interRate;
	int creditLevel;

	cout << "[신용신뢰계좌 개설]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "이  름: ";	cin >> name;
	cout << "입금액: ";	cin >> balance;
	cout << "이자율: ";	cin >> interRate;
	cout << "신용등급(1 : A, 2 : B, 3 : C): ";	cin >> creditLevel;
	cout << endl;

	switch (creditLevel)
	{
	case 1:
		accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, A);
		break;
	case 2:
		accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, B);
		break;
	case 3:
		accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, C);
	}
}


void AccountHandler::DepositMoney()
{
	int money;
	int id;
	cout << "[입    금]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "입금액: ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void AccountHandler::WithdrawMoney()
{
	int money;
	int id;
	cout << "[출    금]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "출금액: ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			if (accArr[i]->Withdraw(money) == 0)
			{
				cout << "잔액부족" << endl << endl;
				return;
			}

			cout << "출금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 계좌ID 입니다." << endl << endl;
}

AccountHandler::AccountHandler() : accNum(0)
{

}

void AccountHandler::ShowAllAccInfo() const
{
	for (int i = 0; i < accNum; i++)
	{
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}

//소멸자
AccountHandler::~AccountHandler()
{
	for (int i = 0; i < accNum; i++)
	{
		delete accArr[i];
	}
}
