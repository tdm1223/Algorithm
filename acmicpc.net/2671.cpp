// 2671. 잠수함식별
// 2018.11.11
#include<iostream>
#include<regex>
#include<string>

using namespace std;

int main()
{
	//정규식
	regex regex("(100+1+|01)+");

	string s;
	cin >> s;
	if (regex_match(s, regex))
	{
		cout << "SUBMARINE" << endl;
	}
	else
	{
		cout << "NOISE" << endl;
	}
	return 0;
}
